#include<bits/stdc++.h>
using namespace std;

class MinStack {
private:
	stack<int> st;
	int mini;

public:
	MinStack() {
		mini = INT_MAX;
	}

	void push(int x) {
		if (st.empty()) {
			st.push(x);
			mini = x;
		} else {
			if (x < mini) {
				st.push(2 * x - mini);
				mini = x;
			} else {
				st.push(x);
			}
		}
	}

	void pop() {
		if (!st.empty()) {
			if (st.top() < mini) {
				mini = 2 * mini - st.top();
			}
			st.pop();
		}
	}

	int top() {
		if (st.empty()) {
			return -1;
		}
		return max(st.top(), mini);
	}

	int getMin() {
		if (st.empty()) {
			return -1;
		}
		return mini;
	}
};

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int q; cin >> q;

	MinStack s;

	while (q--) {
		string op;
		cin >> op;

		if (op == "push") {
			int x;
			cin >> x;
			s.push(x);
		}
		else if (op == "pop") {
			s.pop();
		}
		else if (op == "top") {
			cout << s.top() << "\n";
		}
		else if (op == "getMin") {
			cout << s.getMin() << "\n";
		}
	}

	return 0;
}