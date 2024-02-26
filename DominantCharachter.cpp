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

// str.find(str1);
// if (found != string::npos)
void solve() {
	int n ; cin >> n ;
	string s ; cin >> s ;

	if (s.find("aa") != string::npos )
		cout << 2 << nline;
	else if (s.find("aba") != string::npos )
		cout << 3 << nline;
	else if (s.find("aca") != string::npos )
		cout << 3 << nline;
	else if (s.find("abca") != string::npos )
		cout << 4 << nline;
	else if (s.find("acba") != string::npos )
		cout << 4 << nline;
	else if (s.find("abbacca") != string::npos || s.find("accabba") != string::npos )
		cout << 7 << nline;
	else
		cout << -1 << nline;
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

