// Created  by Mayank , saniya , harsh
#include <bits/stdc++.h>
using namespace std;
//we are creating user
struct Stack {
	// Two inbuilt queues
	queue<int> q1, q2;
	void push(int x) {
		// Push x first in empty q2
		q2.push(x);
		// Push all the remaining
		// elements in q1 to q2.
		while (!q1.empty()) {
			q2.push(q1.front());
			q1.pop();
		}

		// swap the names of two queues
		queue<int> q = q1;
		q1 = q2;
		q2 = q;
	}

	int  pop()
	{
		// if no elements are there in q1
		if (q1.empty())
			return -1;
		q1.pop();
		return 0 ;
	}

	int top()
	{
		if (q1.empty())
			return -1;
		return q1.front();
	}

	int size()
	{
		return q1.size();
	}
	void display() {
		queue<int> temmp = q1;
		cout << "Elements of queue are :\n";
		while (!temmp.empty()) {
			cout << temmp.front() << " ";
			temmp.pop();
		}
	}
};

int main()
{
	Stack s;
	int x ; int m = 0 ;
	while (true) {
		int op ;
		cout << "Enter options \n 1.Push\n 2.Pop \n 3.display \n 4. top  \n 5.Size of stack \n 6.Exit\n";
		cin >> op ;
		switch (op) {
		case 1: cout << "Enter element that is to be pushed \n"; cin >> x ; s.push(x); break ;
		case 2: m  = s.pop() ; if (m == -1) cout << "Empty stack \n";  break ;
		case 3: s.display(); cout << "\n"; break ;
		case 4: if (s.top() == -1) cout << "Empty stack \n"; else cout << "Top:" << s.top() << "\n"; break ;
		case 5: cout << "current size: " << s.size() << "\n"; break ;
		case 6: return -1;
		default: cout << "Invalid Operation \n"; break ;
		}
	}
	return 0;
}