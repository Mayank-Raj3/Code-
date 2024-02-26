
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
int mexi(vector<int> &arr , int n ) {
	vector<int> temp = arr;
	sort(all(temp));
	db(temp);
	int mex = 0;
	for (int i = 0; i < n; i++) {
		if (temp[i] == mex) {
			mex += 1;
		}
	}
	return mex;
}

void solve() {
	int n ; cin >> n ;
	vector<int> arr(n);
	map<int , int > mpp;
	for (int i = 0 ; i < n; i ++ ) {
		cin >> arr[i];
		mpp[arr[i]]++;
	}
	int mex = mexi(arr, n);
	int reqmex = mex + 1LL ;
	if (mex == n ) {
		NO
		return ;
	}
	if (mex == 0) {
		YES
		return ;
	}

	if (mpp[reqmex] > 0) {
		int reqmexffi = -1 , reqmexffj = -1 ;
		for (int i = 0 ; i < n; i++) {
			if (reqmex == arr[i]) {
				reqmexffi = i;
				break;
			}
		}
		for (int  i = n - 1 ; i >= 0 ; i--) {
			if (reqmex == arr[i]) {
				reqmexffj = i;
				break;
			}
		}

		vector<int> newmex;
		for (int i = 0 ; i < reqmexffi; i++) {
			newmex.pb(arr[i]);
		}

		for (int i = reqmexffj + 1 ; i < n; i++) {
			newmex.pb(arr[i]);
		}
		newmex.pb(mex);
		db(newmex);
		if (mexi(newmex, newmex.size()) == mex + 1) {
			YES
		} else {
			NO
		}
	} else {
		int big = 0;
		for (auto it : mpp) {
			if (it.ff > reqmex || it.ss > 0) {
				YES
				return ;
			}
		}
		NO
		return ;
	}


}
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
	jay_shri_ram;

	int t ; cin >> t;
	//int t=1;

	while (t--) {
		solve();
	}
}
/* -----------------END OF PROGRAM --------------------*/


