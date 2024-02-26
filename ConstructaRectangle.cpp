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
	std::vector<int> v(3);
	int odd = 0,  even = 0 ;
	for (int i = 0 ; i < 3 ; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	if (v[0] + v[1] == v[2]) {
		cout << "YES" << nline;


	}
	else {
		if (v[1] == v[2] && (v[0] % 2 == 0)) {
			cout << "YES" << nline;
		} else if (v[0] == v[1] && (v[2] % 2 == 0)) {
			cout << "YES" << nline;
		} else {
			cout << "NO" << nline;
		}
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
