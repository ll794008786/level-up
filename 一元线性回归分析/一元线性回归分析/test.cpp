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
	ay /= n;      /*ax ay: ����ƽ��*/

	for (i = 0, e = f = 0.0; i<n; i++)
	{
		q = x[i] - ax;
		e += q*q;
		f += q*(y[i] - ay);
	}
	a[1] = f / e;          /*�ع�ϵ��a*/
	a[0] = ay - a[1] * ax;   /*�ع�ϵ��b*/

	q = p = u = 0.0;
	umax = 0.0;
	umin = 1.0e+30;
	for (i = 0; i<n; i++)
	{
		yy = a[1] * x[i] + a[0];
		q += (y[i] - yy)*(y[i] - yy);  /*ƫ��ƽ����*/
		p += (yy - ay)*(yy - ay);      /*�ع�ƽ����*/
		e = fabs(y[i] - yy);
		u += e;
		umax = e>umax ? e : umax;     /*���ƫ��*/
		umin = e<umin ? e : umin;     /*��Сƫ��*/
	}
	u /= n;                        /*ƫ��ƽ��*/

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
	printf("�ع�ϵ����");
	printf("a = %5.4lf  b = %5.4lf ", a[1], a[0]);
	printf("\n");
	printf("ƫ��ƽ���ͣ�q = %5.8f", dt[0]);
	printf("\n");
	printf("ƫ� s = %5.8f", dt[1]);
	printf("\n");
	printf("�ع�ƽ���ͣ�p = %5.8f", dt[2]);
	printf("\n");
	printf("���ƫ�umax = %5.8f", dt[3]);
	printf("\n");
	printf("��Сƫ�umin = %5.8f", dt[4]);
	printf("\n");
	printf("ƽ��ƫ�u = %5.8f",dt[5]);
	printf("\n");

	system("pause");
	return 0;
}