#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define ld long double
#define nline "\n"

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
	int low = 1 , high = 1e6  ;		int ans = 0 ;

	while (low <= high ) {
		int mid = (low + high) / 2 ;
		cout << mid << endl ;
		string s; cin >> s;
		if ( s == ">=") {
			low = mid + 1;
			ans = mid ;
		}
		else {
			high = mid - 1;
		}
	}

	cout << "! " << ans << endl ;
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 1 ;

	while (t--) {
		solve();
	}
}