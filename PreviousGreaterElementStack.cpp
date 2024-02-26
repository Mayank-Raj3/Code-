#include<bits/stdc++.h>
using namespace std;
int main() {
	int n ; cin >> n ;
	vector<int> arr(n);
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}

	stack<int> s;
	cout << -1 << " ";
	s.push(arr[0]);
	for (int i = 1 ; i < n ; i++) {
		while (!(s.empty()) && s.top() <=  arr[i] ) {
			s.pop();
		}
		if (s.empty()) {
			cout << -1 << " ";
		} else
			cout << (s.top()) << " ";
		s.push(arr[i]);
	}



}