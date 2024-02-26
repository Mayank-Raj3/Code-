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
bool check(int mid , vector <int> a , vector <int> b , int n) {
	int cnt = 0 , lower = 0 , upper = mid - 1 ;

	for (int i = 0 ; i < n ; i++) {
		if (upper <= a[i] && lower <= b[i]) {
			lower++;
			cnt++;
			upper--;
		}
		if (mid == cnt) return true ;
	}


	return false;
}

void solve() {
	int n ; cin >> n ;
	vector<int> a(n) , b(n);

	for (int i = 0 ; i < n ; i++) cin >> a[i] >> b[i];
	int ans = 0 ;
	int lo = 1 , hi = n ;
	while (lo <= hi) {
		int mid = (lo + hi) / 2;
		if (check(mid, a, b, n)) {
			ans = mid ;
			lo = mid + 1 ;
		}

		else {
			hi = mid - 1;
		}
	}
	cout << ans << nline;

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
