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

	string s ; cin >> s ;
	int n = s.size();
	if (s.size() % 2 == 1 ) {
		cout << "NO" << nline;
		return;
	}
	int i = 0 , j = (s.size()) / 2 ;
	while (i < j && j < n ) {
		if (s[i] != s[j]) {
			cout << "NO" << nline;
			return;
		}
		i++, j++;
	}

	cout << "YES" << nline;


}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
