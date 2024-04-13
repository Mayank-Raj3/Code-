
#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
//using namespace __gnu_pbds;
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

/*
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// if we want set then chang less_equls to less
// in multiset use --lower_bound() to find and erase
//  find_by_order(k): It returns to an iterator to the kth element
// order_of_key(k) : It returns to the number of items that are strictly smaller
*/

/*{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}*/
/*
 auto found = s.find();
  if (found != string::npos)
*/
/*::::::::::::::::::::::::::StartHere:::::::::::::::::::::::::::::::::::::::::::::::::::::*/


/*
	##1
	ababa
	i = 0   s0
	i = 1   s0*p + s1               (prev)*p + curr s1
	i = 2 	s0*p^2 + s1*p + s2
	i = 3 	(s0*p^2 + s1*p + s2)*p + s3
	i = 4   ((s0*p^2 + s1*p + s2)*p + s3)*p +s4

	=>      s0*p^4 + s1*p^3 +s2*p^2 +s3*p^1 +s4
	this is how we hash and we sore the intermediate result in fhash

	##2

	Implementing Get hash  from s2 to s4 which is =>s2*p^2 +s3*p^1 +s4
	=>      s0*p^4 + s1*p^3 +(s2*p^2 +s3*p^1 +s4)


	generalised is:

	fhash[r]-fhash[l-1]*(r-l+1) => [s0*p^4 + s1*p^3 +(s2*p^2 +s3*p^1 +s4) ]
							-
							[s0*p + s1]*(p^3)
							= fhash of s2 to s4

	##3
	Avoding Collision

	we can take two diffrent prime and mods and check with then front hash and
	reverse hash

	p 31 , 37
	m 999999937 , 999999929


	map<int, int>id;
	int cnt = 1;

*/
class rolling_hash {
public:

	//  check the chars
	// p 31 , 37
	// m 999999937 , 999999929

	long long p , mod, n ;
	string s ;
	vector<long long> fHash , primePow;

	// for id
	map<char, int> id;
	int cnt = 1 ;

	void init(string sS , long long pr , long long mod_) {
		s = sS ;
		n = s.size();
		p = pr;
		mod = mod_;
		fHash.resize(n);
		primePow.resize(n);
		//stores all the hashes
		fHash[0] = (s[0] - 'a' + 1); // change here with id
		primePow[0] = 1;

		for (int i = 1 ; i < n; i ++) {
			fHash[i] = (fHash[i - 1] * p + (s[i] - 'a' + 1)) % mod;
			primePow[i] = (primePow[i - 1] * p) % mod;
		}

	}

	long long gethash(int l , int r ) {
		if (l == 0) return fHash[r];
		else {
			int x = (fHash[r] - (1LL * fHash[l - 1] * primePow[r - l + 1]) % mod + mod) % mod;
			return x;
		}
	}
};

class double_rolling_hash {
public:
	// reduce chances of collision
	rolling_hash r1 , r2 ;
	void init(string &s , long long  _p1 = 31 , long long  _p2 = 37  , long long  m2 = 999999937  , long long  m1 = 999999929) {
		r1.init(s, _p1, m1);
		r2.init(s, _p2, m2);
	}
	pair<long long , long long> getBothHash(int l , int r) {
		return {r1.gethash(l, r), r2.gethash(l, r)};
	}
};

void solve() {



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

