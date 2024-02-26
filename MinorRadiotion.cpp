
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
	string s ; cin >> s;
	int n = s.size();
	int i = n - 1 , j = n - 2 ;
	bool ok = false ;
	int sum = 0 ;
	while (j >= 0) {
		int k = s[i] - '0';
		int k2 = s[j] - '0';
		sum = k + k2;
		if (sum >= 10) {
			k = sum / 10;
			k2 = sum % 10;
			// cout << k << " " << k2 << nline;
			s[j] = (char)('0' + k);
			s[i] = (char)('0' + k2);
			ok = true ;
			break;
		}
		i--, j--;

	}
	if (ok) {
		cout << s << nline;
	}
	else {
		cout << (s[0] - '0') + (s[1] - '0');
		for (int i = 2 ; i < n ; i++)
			cout << s[i];
		cout << nline;
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

