#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n; //10000
		int arr[6]; // [ 0 ,9 ,0 ,0 ,5 ,0]          [0 ,6 ,7 ,8 ,9,0]-->9876
		int total = 0, m = 1;
		for (int i = 1; i < 6; i++) {
			arr[i] = n % 10;
			n = n / 10;
			if (arr[i] != 0) {
				total++;
			}
		}
		cout << total << "\n";
		for (int i = 1; i < 6; i++) {
			if (arr[i] != 0) {
				cout << arr[i]*m << " "; /// 6 70 800 9000
			}
			m = m * 10;
		}
		cout << "\n";
	}
	return 0;
}