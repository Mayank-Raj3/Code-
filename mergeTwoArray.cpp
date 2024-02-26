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
	int n , m ; cin >> n >> m ;
	std::vector<int> a(n);
	std::vector<int> b(m);
	for (int i = 0 ; i < n ; i++) cin >> a[i];
	for (int i = 0 ; i < m ; i++) cin >> b[i];
	vector<int> c(m + n);
	int i , j , k = 0 ; i = j = 0;

	while (i < n && j < m ) {
		if (a[i] < b[j]) {
			c[k] = a[i];
			i++, k++;
		}
		else {
			c[k] = b[j];
			j++, k++;
		}
	}

	while (i < n) {
		c[k] = a[i];
		k++ , i++;
	}

	while (j < m) {

		c[k] = b[j];

		k++, j++;
	}


	for (int i = 0 ; i < (m + n) ; i++) cout << c[i] << " ";




}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 1;

	while (t--) {
		solve();
	}
}
