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
	int n , m ; cin >> n >> m ;
	vector<int> a(n);
	vector<int> b(m);
	for (int i = 0 ; i < n ; i++) cin >> a[i] ;
	for (int i = 0 ; i < m ; i++) cin >> b[i];
	int i = 0 , j = 0 , res = 0;
	while (i < n ) {

		while (j < m) {

			// cout << a[i] << " " << b[i] << nline;

			if (a[i] == b[j]) {
				res++;
			}

			j++;
		}

		j = 0 ;


		i++;
	}

	cout << res;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 1 ;

	while (t--) {
		solve();
	}
}
