
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
//-------------------------------Think&Code----------------------------------*/
/*
Contribution Technique

aba
          a   b
a   --->  1   0   =1
ab  --->  1   1   =2
aba --->  1   1   =2
ba  --->  1   1   =2
b   --->  0   1   =1
a   --->  1   0   =1
----------------------
          5 + 4  =>  9

so we observe that  a char in every substring contributes +1

so we can find it in 26*O(n) time

our formula will be all stubstring containg a char x will continure that much
so we calculate the contribution  as follows

number of not containing x substring = (chunks+1)
																								C 2
==> tot_substrings - not X substring
=>	 this will give the numver of substring that is containg that char x

we can do this for all 26 char and calculate effciently

*/
long long ncr(long long n ) {
	return (n * (n + 1LL)) / 2LL;
}

long long appealSum(string s) {
	int n = s.size();
	long long  ans = 0 ;
	for (char i = 'a' ; i <= 'z' ; i++) {
		int x = 0 ;
		int chunks = 0 ;
		while (x < n) {
			long long cnt = 0;
			while (x < n && s[x] != i)x++, cnt++;
			chunks += ncr(cnt) ;
			x++;
		}
		ans += (ncr(n) - chunks);
	}
	return (  ans );
}


int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
	jay_shri_ram;
	string s ; cin >> s ;
	cout << appealSum(s);
}
/* -----------------END OF PROGRAM --------------------*/


