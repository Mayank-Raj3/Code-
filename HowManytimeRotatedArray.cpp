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
int n ;
int arr[50000];
bool check(int mid) {
	return arr[mid] >= arr[0];
}

void solve() {
	cin >> n ;
	for (int i = 0 ; i < n ; i++) cin >> arr[i];
	int lo = 0 ; int hi = n - 1;
	int  ans = 0 ;
	while (lo <= hi) {
		int mid = (lo + hi) / 2;
		if (check(mid)) {
			lo = mid + 1 ;
		} else {
			ans = mid ;
			hi = mid - 1;
		}
	}


	cout << ans << " ";


}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	solve();
}
