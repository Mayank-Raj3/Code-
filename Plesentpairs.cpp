
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
// intution arr[i]* arr[j] suppose arr[i]=5 so => 5 *arr[j]X && i = 2
//now we  want i+j also be the multiple of 5 so i+ j = 5X
//  then we iterate from 1 to n and every j from arr[i] - i to j and we check weather it is correct or note
//
void solve() {
	int n ; cin >> n ;
	vector<int> arr(n + 1);
	for (int i = 1 ; i <= n ; i++) {
		cin >> arr[i];
	}
	int ans = 0 ;
	for (int i = 1 ; i <= n ; i++ )
	{
		for (int j = arr[i] - i ; j <= n ; j += arr[i]) {
			if (j >= 0)
				if (arr[i]*arr[j] == i + j && i < j) {
					ans++;
				}
		}
	}
	cout << ans << nline;




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

