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
bool check(ll mid , vector<int> arr , int n , int k ) {
	int sum = 0;
	for (int i = 0 ; i < n ; i++) {
		sum += (arr[i] / mid);
		if (arr[i] % mid != 0) {
			sum += 1;
		}
	}

	return sum <= k;

}
void solve() {
	int n , k; cin >> n >> k; vector<int> arr(n);

	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}

	int lo = 1 , hi = 1e6 ;
	int ans = 1e6;
	while (lo <= hi) {
		ll mid = (lo + hi) / 2;
		if (check(mid, arr, n, k)) {
			ans = mid ;

			hi = mid - 1;;

		}
		else {
			lo = mid + 1;

		}

	}
	cout << ans;




}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	solve();
}




