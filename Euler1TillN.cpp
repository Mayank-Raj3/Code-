//      .....All...copyright....Mynk28nov.........;
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define ld long double
#define nline "\n"
#define s " "

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
	int n ; cin >> n ; cout << n << nline;
	int phi[n + 1];
	for (int i = 1 ; i <= n; i++ ) {
		phi[i] = i;
	}
	cout << 1 << " ";

	for (int  p = 2 ; p <= n ; p++) {
		// |2| 3 4 5 6 ==> 1 3 |4| 5 |6|
		//  2  3 4 5 6

		if (phi[p] == p) {
			phi[p] = p - 1; //since prime;
			for (int j = p; j <= n; j += p)
				phi[j] -= phi[j] / p;
		}
		cout << phi[p] << s ;

	}

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	solve();
}
