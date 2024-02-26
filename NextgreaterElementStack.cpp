#include<bits/stdc++.h>
using namespace std;
int main() {
	int n ; cin >> n ;
	vector<int> arr(n);
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	reverse(arr.begin(), arr.end());
	stack<int> s;
	s.push(arr[0]);
	vector<int>ans;
	ans.push_back(-1);
	for (int i = 1 ; i < n ; i++) {
		while (!(s.empty()) && s.top() <=  arr[i] ) {
			s.pop();
		}
		if (s.empty()) {
			ans.push_back(-1);

		} else
			ans.push_back(s.top());

		s.push(arr[i]);
	}
	reverse(ans.begin(), ans.end());

	for (auto it : ans) {
		cout << it << " ";
	}


}