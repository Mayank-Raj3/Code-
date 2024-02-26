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
void check(int n ) {
	bool flag = false;
	for (int it = 1 ; it <= sqrt(n) ; it++) {
		int x = 2 * it;
		int ter = (n - x) % (it + 2)
		          ;
		if (ter == 0) {
			flag = true;
			break;
		}
	}
	if (flag) cout << "yes\n";
	else cout << "no\n";
}

void solve(int n) {
	if ( n < 5 ) {
		cout << "no\n";
	}

	else {
		check(n);
	}

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