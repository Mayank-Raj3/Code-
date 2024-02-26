#include<bits/stdc++.h>
using namespace std;
int main() {
	int m ; cin >> m;
	int n = 12;
	int arr[n];
	for (int i = 0 ; i < n ; i ++) {
		cin >> arr[i];
	}
	if (m == 0) { cout << 0 ; return 0;}

	sort(arr, arr + n );
	int sum = 0, y(0);

	for (int i = n - 1; i >= 0; i--) {
		sum += arr[i];
		y++;
		if (sum >= m) {
			break;
		}
	}
	if (sum < m) {cout << -1 ; return 0;}
	cout  << y;
}