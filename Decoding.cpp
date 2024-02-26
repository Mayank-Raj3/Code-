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

void solve() {
	int n;
	cin >> n;
	int cnt2 = 0, cnt3 = 0;
	while (n % 2 == 0) {
		n /= 2;
		++cnt2;
	}
	while (n % 3 == 0) {
		n /= 3;
		++cnt3;
	}
	if (n == 1 && cnt2 <= cnt3) {
		cout << 2 * cnt3 - cnt2 << endl;
	} else {
		cout << -1 << endl;
	}


}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 1;

	while (t--) {
		solve();
	}
}
