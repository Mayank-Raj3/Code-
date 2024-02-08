#include <bits/stdc++.h>
using namespace std;


class CustomStack {
public:
	vector<pair<int, int>> st;
	int top ;
	CustomStack(int maxSize) {
		st.resize(maxSize);
		top = 0;
	}

	void push(int x) {
		if (top < st.size()) {
			st[top] = {x, 0};
			top++;
		}
	}

	int pop() {
		if (top != 0) {
			int ans = st[top].first + st[top].second;
			if (top + 1 < st.size()) {
				st[top + 1].second += st[top].second;
			}
			top--;
			return ans ;

		}
		return -1 ;
	}

	void increment(int k, int val) {
		k = min(k, int(st.size()));
		k--;
		if (k >= 0) {
			st[k].second += val;
		}
	}
};

int main()
{


	int maxSize;
	cin >> maxSize;

	int q;
	cin >> q;

	CustomStack* customStack = new CustomStack(maxSize);

	for (int itr = 0; itr < q; itr++) {
		string op;
		cin >> op;

		if (op == "push") {
			int x;
			cin >> x;

			customStack->push(x);
		}
		else if (op == "pop") {
			cout << customStack->pop() << "\n";
		}
		else if (op == "inc") {
			int k, val;
			cin >> k >> val;
			customStack->increment(k, val);
		}
	}

}