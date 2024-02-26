#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	vector<int> arr(n);
	for (int i = 0 ; i < n ; i++)
		cin >> arr[i];
	stack<int> s;

	int prevsmaller[n] {};

	for (int i = 0 ; i < n ; i++) {

		while (s.empty() == false && arr[i] <= arr[s.top()]) {
			s.pop();
		}

		if (s.empty() )
			prevsmaller[i] = 0;
		else
			prevsmaller[i] = s.top() + 1;

		s.push(i);
	}
	while (s.empty())
		s.pop();

	int rigthsmaller[n] {};


	for (int i = n - 1 ; i >= 0 ; i--) {

		while (s.empty() == false && arr[i] <= arr[s.top()]) {
			s.pop();
		}

		if (s.empty() )
			rigthsmaller[i] = n - 1;
		else
			rigthsmaller[i] = s.top() - 1;

		s.push(i);
	}
	int maxi = 0;
	for (int i = 0 ; i < n ; i++) {
		maxi = max(maxi, ((rigthsmaller[i] - prevsmaller[i] + 1 ) * arr[i] ));
	}
	cout << maxi << "\n";


}