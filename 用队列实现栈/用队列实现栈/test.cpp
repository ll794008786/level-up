#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<queue>

using namespace std;

class MyStack {
public:
	/** Initialize your data structure here. */
	queue<int> one;
	queue<int> two;
	MyStack() {

	}

	/** Push element x onto stack. */
	void push(int x) {
		one.push(x);
	}

	/** Removes the element on top of the stack and returns that element. */
	int pop() {
		int size = one.size();
		size--;
		while (size--)
		{
			two.push(one.front());
			one.pop();
		}

		int result = one.front();
		one.pop();
		one = two;
		while (!two.empty())
		{
			two.pop();
		}
		return result;
	}

	/** Get the top element. */
	int top() {
		return one.back();
	}

	/** Returns whether the stack is empty. */
	bool empty() {
		return one.empty();
	}
};

/**
* Your MyStack object will be instantiated and called as such:
* MyStack* obj = new MyStack();
* obj->push(x);
* int param_2 = obj->pop();
* int param_3 = obj->top();
* bool param_4 = obj->empty();
*/