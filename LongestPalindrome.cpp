
#include<bits/stdc++.h>
using namespace std;
#define int 						  long long
#define ll 							  long long
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
#define PI                            3.141592653589793238462
#define sz(x) (                       (int)(x).size())
#define jay_shri_ram                  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define rall(x)                       (x).rbegin(), (x).rend()

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
const int mod = 1e9 + 7;
const int INF = 2e18;


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
void _print(pair <T, V> p) { cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}"; } template <class T> void _print(vector <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; } template <class T> void _print(set <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; } template <class T> void _print(multiset <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; } template <class T, class V> void _print(map <T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }
/*{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}*/
int inv(int i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
void extendgcd(int a, int b, int*v) {if (b == 0) {v[0] = 1; v[1] = 10; v[2] = a; return ;} extendgcd(b, a % b, v); int x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);}
int ceil_div(int a, int b) {return a % b == 0 ? a / b : a / b + 1;}
int binpow(int a, int b, int mod) {a %= mod; int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a * 1ll) % mod; b = b >> 1; } return res; }
int mminv(int a, int b) {int arr[3]; extendgcd(a, b, arr); return mod_add(arr[0], 0, b);} //for non prime b
int mminvprime(int a, int b) {return binpow(a, b - 2, b);}
int mod_div(int a, int b, int m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
// first four is adjacent after digonal
int dx[8] = {0, 1, 0, -1, 1, 1, -1, -1};
int dy[8] = {1, 0, -1, 0, 1, -1, -1, 1};

/*{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}*/
/*
 auto found = s.find();
  if (found != string::npos)
*/
/*::::::::::::::::::::::::::StartHere:::::::::::::::::::::::::::::::::::::::::::::::::::::*/

void solve() {
	string s; cin >> s;
	vi freq(26);
	int n = s.size();
	string result;
	for (auto it : s ) {
		freq[it - 'a']++;
	}


	db(freq);
	string back;
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < freq[i] / 2; j++) result.pb(i + 'a');
	}
	db(freq)
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < freq[i] / 2; j++) back.pb(i + 'a');
	}
	db(freq)
	for (auto it : back) freq[it - 'a']--;
	for (auto it : result) freq[it - 'a']--;
	db(freq)
	int maxi = 0 , ele = -1;
	for (int i = 0; i < 26; i++) {
		if (freq[i] > maxi) {
			maxi = freq[i];
			ele  = i ;
		}
	}


	reverse(all(back));
	string trmp(maxi, (ele + 'a'));
	if (maxi > 0)
		cout << result << trmp << back << nline;
	else
		cout << result <<  back << nline;

}


int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
	jay_shri_ram;

	int t ; cin >> t ; while (t--)
		solve();
}
/*----------------------------------endsHere----------------------------------*/