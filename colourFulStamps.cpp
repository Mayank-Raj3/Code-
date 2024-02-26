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
	string s ; cin >> s ;
	int red(0), blue(0) ;

	for (int i = 0 ; i < n ; i++) {
		if (s[i] == 'W') {
			if ((red == 0 && blue > 0) || (blue == 0 && red > 0)) {
				cout << "NO" << endl;
				return  ;
			}
			red = 0, blue = 0 ;
		}
		else {
			if (s[i] == 'R') red ++;
			if (s[i] == 'B') blue++;
		}
	}
	if ((red == 0 && blue > 0) || (blue == 0 && red > 0)) {
		cout << "NO" << endl;
		return  ;
	}
	else {cout << "YES" << endl;}




}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
