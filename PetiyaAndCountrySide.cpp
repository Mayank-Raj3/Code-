//      .....All...copyright....Mynk28nov.........;
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define ld long double
#define nline "\n"

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
int howmanyrain(int x, int n , int arr[] , int index ) {
	int cnt = 1;


	return cnt;

}
void solve() {
	int n ; cin >> n ;
	int arr[n];
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	if (n == 1) {
		cout << 1; return;
	}
	int cnt = 0;
	for (int i = 0 ; i < n ; i++) {
		int temp = 1;
		for (int j = i ; j < n - 1 ; j ++) {
			if (arr[j] >= arr[j + 1]) temp++;
			else break;
		}

		for (int j = i ; j >= 1  ; j--) {
			if (arr[j] >= arr[j - 1]) temp++;
			else break;
		}
		cnt = max(cnt, temp);

	}

	cout << cnt;

}



int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 1;

	while (t--) {
		solve();
	}
}
