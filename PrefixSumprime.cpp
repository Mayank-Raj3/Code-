
#include<bits/stdc++.h>
using namespace std;
#define int 						  long long
#define ld 							  long double
#define nline						  "\n"
#define ff 							  first
#define ss                            second
#define pb                            push_back
#define int                           long long
#define fl(i,k,n)                     for (int i = k; i < n; i++)
#define rfl(i,n, k)                   for (int i = n; i >= k; i--)
#define fel(a,x)                      for (auto& a : x)
#define mp                            make_pair
#define ppb 						  pop_back
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
#define PI                            3.141592653589793238462
#define sz(x) (                       (int)(x).size())
#define jay_shri_ram                  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Builtin data types
typedef pair<int, int> 	              pii     ;
typedef vector<int>                   vi      ;
typedef vector<string>                vs      ;
typedef vector<pii> 				  vpi     ;
typedef vector <pair<int , int> >     vpi     ;
typedef vector<bool>                  vb      ;
typedef vector<vector<int>>           vvi     ;
typedef map<int, int> 				  mpii    ;
typedef set<int>   					  seti    ;
typedef multiset<int> 				  mseti	  ;
typedef unordered_set<int>            useti   ;
typedef unordered_map<int, int>       umapii  ;
typedef unsigned long long            ull     ;
//constants
const int MAX_N = 1e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const int EPS = 1e-9;

//debugger
#ifndef ONLINE_JUDGE
#define db(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define db(x)
#endif
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V>
void _print(pair <T, V> p) {
	cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";
}
template <class T>
void _print(vector <T> v) {
	cerr << "[ ";
	for (T i : v) {
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}
template <class T>
void _print(set <T> v) {
	cerr << "[ ";
	for (T i : v) {
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}
template <class T>
void _print(multiset <T> v) {
	cerr << "[ ";
	for (T i : v) {
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}
template <class T, class V>
void _print(map <T, V> v) {
	cerr << "[ ";
	for (auto i : v) {
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}
vector<int> sieve(int n) {int*arr = new int[n + 1](); vector<int> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}

//-------------------------------Think&Code----------------------------------*/

void solve() {
	int n ; cin >> n ;
	// my implementation
	// vector<int> arr(n), pre(n), ans(n);
	// int o = 0 , two = 0 ;
	// for (int i = 0 ; i < n ; i ++) {
	// 	cin >> arr[i];
	// 	if (arr[i] == 1) o++;
	// 	else two++;
	// }
	// if (o == 1 && two == 1) {
	// 	cout << "2 1" << nline;
	// 	return ;
	// }
	// vi s = sieve(1000000);
	// if (o == 0  || two == 0) {
	// 	for (auto it : arr) {
	// 		cout << it << " ";
	// 	}
	// 	cout << nline;
	// 	return ;
	// }


	// ans[0] = 2;
	// pre[0] = 2;
	// two--;
	// int j = 0 ;
	// for (int i = 1 ; i < n; i++) {
	// 	if (s[j] - pre[i - 1] ==  1 && o > 0) {
	// 		ans[i] = 1;
	// 		pre[i] = pre[i - 1] + ans[i];
	// 		j++;
	// 		o--;
	// 	}
	// 	else if (s[j] - pre[i - 1] == 2 && two > 0) {
	// 		ans[i] = 2;
	// 		pre[i] = pre[i - 1] + ans[i];
	// 		j++;
	// 		two--;
	// 	}
	// 	else if (s[j] - pre[i - 1] > 2 && two > 0) {
	// 		ans[i] = 2;
	// 		pre[i] = pre[i - 1] + ans[i];
	// 		two--;
	// 	}
	// }
	// db(s);
	// if (o > 0) {
	// 	for (int i = 0 ; i < n; i++) {
	// 		if (ans[i] == 0) {
	// 			ans[i] = 1;
	// 		}
	// 	}
	// }
	// else {
	// 	for (int i = 0 ; i < n; i++) {
	// 		if (ans[i] == 0) {
	// 			ans[i] = 2;
	// 		}
	// 	}
	// }

	// for (auto it : ans) {
	// 	cout << it << " ";
	// }
	// cout << nline;
	int on = 0 , tw = 0 ;
	for (int i = 0 ; i < n; i++) {
		int x ; cin >> x ;
		if (x == 1) on++; else {
			tw++;
		}
	}
	vector<int> s = sieve(1e6);
	int j = 0 , diffrence = s[j];
	while (on > 0 && tw > 0) {
		while (diffrence > 1 && tw > 0) { // agr diff 1 se bada ha tho
			cout << 2 << " ";
			diffrence -= 2; //
			tw--;
		}
		if (diffrence == 1 && on > 0) { // agr one hua tho 1
			cout << 1 << " ";
			diffrence -= 1;
			on--;
		}
		j++;
		diffrence = s[j] - s[j - 1]; //since hame phle vala prime mill chuka ha tho tho - naya prime

	}
	while (on != 0) {
		cout << 1 << " ";
		on--;
	} while (tw != 0) {
		cout << 2 << " ";
		tw--;
	}
}

void solve1() {
	int n ; cin >> n ;
	int on = 0 , tw = 0 ;
	for (int i = 0 ; i < n; i++) {
		int x ; cin >> x ;
		if (x == 1) on++; else {
			tw++;
		}
	}
	if (on && tw) { // agr dono mea ha ki nih

		cout << 2 << " " << 1 << " ";
		on--, tw--;
	}
	while (tw--)
		cout << 2 << " ";

	while (on--)
		cout << 1 << " ";
}

int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
	jay_shri_ram;

	// int t ; cin >> t;
	int t = 1;

	while (t--) {
		solve1();
	}
}
/* -----------------END OF PROGRAM --------------------*/


