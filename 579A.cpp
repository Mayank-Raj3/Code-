#include<bits/stdc++.h>
using namespace std;
int main() {
	int n ;
	cin >> n;
	int cnt = 1;
	for (int i = 0 ; i <= n ; i++) {
		int sq = pow(2, i);
		if (sq == n) {
			cout << cnt << endl;
			break;
		}
		if (pow(2, i) > n) {
			int x = i - 1;
			cout << n - pow(2, x)  + cnt ;
			break;
		}

	}
}