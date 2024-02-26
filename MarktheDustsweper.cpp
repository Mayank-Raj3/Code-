
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define nline "\n"
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define ps(x, y) fixed << setprecision(y) << x
#define all(x) begin(x), end(x)
#define setbit(x) __builtin_popcount(x);

// Builtin data types
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef map<int, int> mpii;
typedef set<int> seti;
typedef multiset<int> mseti;

//constants
const int MAX_N = 1e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const int EPS = 1e-9;


void solve() {
	int n ; cin >> n ;
	int z = 0 , ans = 0;
	vector<int> a(n);
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}
	while (z < n && a[z] == 0)
		z++;

	for (int i = z; i < n - 1; ++i) {
		ans += a[i];
		if (a[i] == 0) ans++;
	}
	cout << ans << nline;


}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;
	// int t = 1;

	while (t--) {
		solve();
	}
}
/* -----------------END OF PROGRAM --------------------*/

