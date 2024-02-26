#include<bits/stdc++.h>
using namespace std;
int main() {
	int n , s , x[1000] , y[1000];
	cin >> n >> s;

	for (int i = 0  ; i < n ; i++) {
		cin >> x[i] >> y[i];

		if (s > x[i]) {
			s = s + y[i];
		}

		else {
			cout << "NO";
			return 0;
		}

	}
	cout << "YES";



}