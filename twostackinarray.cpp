#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
struct  twostack {
	int *arr;
	int cap ;
	int top1;
	int top2;
	twostack(int c ) {
		cap = c;
		arr = new int [cap];
		top1 = -1;
		top2 = cap;
	}
	void push1(int x ) {
		if (top1 == top2 - 1) {
			cout << "Arry is full" << nline;
			return ;
		}

		top1++;
		arr[top1] = x;

	}
	void push2(int x ) {
		if (top2 == top1 + 1) {
			cout << "Arry is full" << nline;
			return ;
		}

		top2--;
		arr[top2] = x;

	}

	int pop1() {
		if (top1 == -1) {
			cout << "stack underflow \n";
			return -1  ;
		}
		int res = arr[top1--];
		return res ;
	}

	int pop2() {
		if (top2 == cap) {
			cout << "stack underflow \n";
			return -1  ;
		}
		int res = arr[top2++];
		return res ;
	}
	void seek1() {
		if (top1 == -1) {
			cout << "stack underflow \n";
			return   ;
		}
		for (int i = 0 ; i <= top1; i++ ) {
			cout << arr[i] << nline;
		}
	}
	void seek2() {
		if (top2 == cap) {
			cout << "stack underflow \n";
			return   ;
		}
		cout << arr[top2] << nline;
	}




};


int main() {
	twostack ts(10);
	ts.push1(5);
	ts.push2(10);
	ts.push2(15);
	ts.push1(11);
	ts.push2(7);
	cout << "Popped element from stack1 is " << ts.pop1();
	ts.push2(40);
	cout << "\nPopped element from stack2 is " << ts.pop2();
	return 0;


	for (int i = 0 ; i < 10 ; i++) {
		cout << ts.arr[i] << " ";
	}


}