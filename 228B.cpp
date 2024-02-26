#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	int sum = 0;
	for (int i = 0 ; i < t ; i++) {
		int x;
		cin >> x;
		sum += x;
	}

	int cnt = 0;
	for (int i = 1; i <= 5 ; i++ ) {
		if ( (sum + i) % (t + 1) != 1) {
			cnt++;
		}
	}
	cout << cnt;
}