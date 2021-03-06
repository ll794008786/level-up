#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <math.h>

void liregression_lis(double x[], double y[], int n, double a[], double dt[])
{
	int    i;
	double ax, ay, e, f, q, u, p, umax, umin, yy;

	for (i = 0, ax = ay = 0.0; i<n; i++)
	{
		ax += x[i];
		ay += y[i];
	}
	ax /= n;
	ay /= n;      /*ax ay: 算术平均*/

	for (i = 0, e = f = 0.0; i<n; i++)
	{
		q = x[i] - ax;
		e += q*q;
		f += q*(y[i] - ay);
	}
	a[1] = f / e;          /*回归系数a*/
	a[0] = ay - a[1] * ax;   /*回归系数b*/

	q = p = u = 0.0;
	umax = 0.0;
	umin = 1.0e+30;
	for (i = 0; i<n; i++)
	{
		yy = a[1] * x[i] + a[0];
		q += (y[i] - yy)*(y[i] - yy);  /*偏差平方和*/
		p += (yy - ay)*(yy - ay);      /*回归平方和*/
		e = fabs(y[i] - yy);
		u += e;
		umax = e>umax ? e : umax;     /*最大偏差*/
		umin = e<umin ? e : umin;     /*最小偏差*/
	}
	u /= n;                        /*偏差平均*/

	dt[0] = q;
	dt[1] = sqrt(q / n);
	dt[2] = p;
	dt[3] = umax;
	dt[4] = umin;
	dt[5] = u;
	return;
}

int main()
{
	double x[11] = { 0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0 };
	double y[11] = { 2.76, 2.84, 2.97, 3.11, 3.23, 3.26, 3.49, 3.53, 3.66, 3.78, 3.95 };
	double dt[6], a[2];

	liregression_lis(x, y, 11, a, dt);
	printf("回归系数：");
	printf("a = %5.4lf  b = %5.4lf ", a[1], a[0]);
	printf("\n");
	printf("偏差平方和：q = %5.8f", dt[0]);
	printf("\n");
	printf("偏差： s = %5.8f", dt[1]);
	printf("\n");
	printf("回归平方和：p = %5.8f", dt[2]);
	printf("\n");
	printf("最大偏差：umax = %5.8f", dt[3]);
	printf("\n");
	printf("最小偏差：umin = %5.8f", dt[4]);
	printf("\n");
	printf("平均偏差：u = %5.8f",dt[5]);
	printf("\n");

	system("pause");
	return 0;
}