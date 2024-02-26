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
	int n ; cin >> n ;
	std::vector<int> v(n);
	for (int i = 0 ; i < n ; i++) {
		cin >> v[i];
	}
	int acnt = 0;
	for (int i = 1 ; i < n ; i++) {
		if (v[0] < v[i]) {
			acnt = i;
			break;
		}


	}
	if (!acnt) cout << "-1" << nline;
	else {
		cout << acnt << nline;
		for (int i = 0 ; i < acnt; i++) {
			cout << v[i] << " ";
		}
		cout << nline << n - acnt  << nline;;
		for (int i = acnt ; i < n ; i++) {
			cout << v[i] << " ";

		}
		cout << nline;
	}

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
