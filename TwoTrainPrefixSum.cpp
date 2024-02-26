//.....All...copyright....Mynk28nov.........;
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define ld long double
#define nline "\n"

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve(int n) {
	int prefsum[n - 1], p[n - 1];
	for (int i = 0 ; i < n - 1; i++ ) {
		cin >> p[i];
	}



	prefsum[0] = p[0];

	for (int i = 1 ; i < n - 1 ; i++) {
		prefsum[i] = prefsum[i - 1] + p[i];

	}
	int s = 0 ;



	for (int i = 0 ; i < n - 1 ; i++) {
		if (s < prefsum[i]) {
			s = s + (prefsum[i] - s);
		}
		s += p[i];


	}
	cout << s  << nline;


}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc ; cin >> tc;

	while (tc--) {
		int n ;

		cin >> n ;
		solve(n);
	}
}