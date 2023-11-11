
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
First we compute the

(best here )max subarray sum possible of single array given
suffix sum max
prefix sum max
and total sum of the array
now after computing we see that our merge array 's above 4 things will be

there are 3 cases 1. a's max subarray sum is best , 2. b's is max , 3. half from a and half from b
ans.best = max({a.best, b.best, (a.suffBest + b.prefBest)});
for prefix sum max we have 2 cases 1. a's is maximum , 2. we need to include whole a and then take prefix of b
ans.prefBest = max(a.prefBest , (a.tot + b.prefBest));
Similar in the case of suffix
ans.suffBest = max(b.suffBest , (b.tot + a.suffBest));
total will be the sum of both arrays ans.tot = a.tot + b.tot;
first merge two arrays then the merged array with ith array

*/
struct node {
	ll best  , suffBest  , prefBest, sum  , tot ;
	void buildkar(vector<int> arr) {
		int n = arr.size();

		// total sum of array
		tot = accumulate(all(arr), 0ll);

		// prefix best
		prefBest = arr[0] , sum = arr[0];
		for (int i = 1 ; i < n ; i++) {
			sum += arr[i];
			prefBest = max(prefBest, sum );
		}

		// suffix best
		suffBest = arr[n - 1] , sum = arr[n - 1];
		for (int i = n - 2 ; i >= 0 ; i--) {
			sum += arr[i];
			suffBest = max(suffBest, sum );
		}

		// by using kandane we find the max subarray sum
		best = arr[0] , sum = arr[0];
		for (int i = 1 ; i < n ; i++) {
			sum += arr[i];
			best = max(best, sum );
			if (sum < 0 ) sum = 0;
		}



	}
	node() {
		best = 0 ;
		suffBest  = 0;
		prefBest = 0;
		sum = 0 ;
		tot = 0 ;
	}
};

node merge(node a , node b) {
	node ans ;

	//merge logic explained above
	ans.best = max({a.best, b.best, (a.suffBest + b.prefBest)});
	ans.prefBest = max(a.prefBest , (a.tot + b.prefBest));
	ans.suffBest = max(b.suffBest , (b.tot + a.suffBest));
	ans.tot = a.tot + b.tot;

	return ans;
}
vector<int> arr;
vector<node> tree;

void build(int index , int l , int r  ) {
	if (l == r) {
		// leaf
		tree[index].buildkar({arr[l]});
		return ;
	}

	int mid =  (l + r) / 2;
	build(2 * index, l, mid);
	build(2 * index + 1, mid + 1, r);

	tree[index] = merge(tree[2 * index], tree[2 * index + 1]);


}


void update(int index , int l , int r, int pos , int k ) {
	if (pos < l or pos > r) {
		return;
	}
	if (l == r  ) {
		// leaf
		tree[index].buildkar({k});
		return ;
	}

	int mid =  (l + r) / 2;
	update(2 * index, l, mid, pos , k );
	update(2 * index + 1, mid + 1, r, pos , k );
	tree[index] = merge(tree[2 * index], tree[2 * index + 1]);

}

node query(int index , int l , int r, int lq , int rq ) {
	if (lq > r || rq < l)
		return node() ;
	if (lq <= l  and r <= rq ) {
		return tree[index];
	}

	int mid =  (l + r) / 2;
	return merge(query(2 * index, l, mid, lq , rq ) , query(2 * index + 1, mid + 1, r, lq , rq ));
}
void solve() {
	/*
	q1.
		1 update arr[pos] to val
		2 query find min / max / sum between l ,r ;
	*/
	int n , q ; cin >> n >> q;
	arr.resize(n);
	tree.resize(4 * n);
	for (int i = 0 ; i < n ; i ++) {
		cin >> arr[i];
	};

	build(1, 0, n - 1);

	while (q--) {
		int pos , val ; cin >> pos >> val;
		pos--;
		update(1, 0, n - 1, pos, val);
		cout << max(0ll, query(1, 0, n - 1, 0, n - 1).best) << nline;
	}

}
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
	jay_shri_ram;
	solve();
}
/*----------------------------------endsHere----------------------------------*/

