
#include<bits/stdc++.h>
using namespace std;
#define int 						  long long
#define ld 							  long double
#define nline						  "\n"
#define ff 							  first
#define ss                            second
#define pb                            push_back
#define mp                            make_pair
#define ps(x, y)                      fixed << setprecision(y) << x
#define setbit(x)                     __builtin_popcount(x);
#define all(var)                      var.begin(), var.end()
#define desc                          greater<int>()
#define spc                           <<" "<<
#define YES                           cout << "YES\n";
#define NO                            cout << "NO\n";
#define Yes                           cout << "Yes\n";
#define No                            cout << "No\n";
#define minus1                        cout << "-1\n";
#define one                           cout << "1\n";
#define gcd(a, b)                     __gcd(a, b)


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
	vi arr(n);
	map<int , int > mp;
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
		mp[arr[i]]++;
	}

	int maxi = *max_element(all(arr));
	int mini = *min_element(all(arr));
	int dif = abs(maxi - mini);
	// cout << dif << nline;
	int cnt  = 0 ;
	for (int i = 0 ; i < n; i++) {
		auto cntt = mp.find(arr[i] - dif);

		if (cntt != mp.end()) {
			cnt += cntt->second;
		}
	}
	if (mp[mini] == n) {
		cout << ( n * (n - 1)) << nline;
		return ;
	}
	else {
		cout << mp[mini]*mp[maxi] * 2 << nline;
	}

}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;
	//int t=1;

	while (t--) {
		solve();
	}
}
/* -----------------END OF PROGRAM --------------------*/

