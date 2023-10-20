#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int                           long long
#define ll                               long long
#define ld                               long double
#define nline                          "\n"
#define ff                               first
#define ss                            second
#define pb                            push_back
#define int                           long long
#define fl(i,k,n)                     for (int i = k; i < n; i++)
#define rfl(i,n, k)                   for (int i = n; i >= k; i--)
#define fel(a,x)                      for (auto& a : x)
#define mp                            make_pair
#define ppb                           pop_back
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

typedef pair<int, int>                   pii     ;
typedef vector<int>                   vi      ;
typedef vector<string>                vs      ;
typedef vector<pii>                   vpi     ;
typedef vector <pair<int , int> >     vpi     ;
typedef vector<bool>                  vb      ;
typedef vector<vector<int>>           vvi     ;
typedef map<int, int>                   mpii    ;
typedef set<int>                         seti    ;
typedef multiset<int>                   mseti      ;
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


void solve() {
    int n , m ; cin >> n >> m ;
    vector<string> arr(n);
    for (int i = 0 ; i < n ; i++) cin >> arr[i];
    vector<vector<int>> vis(n, vector<int>(m, 0));
    vector<vector<int>> dismons(n, vector<int>(m, 1e9));
    vector<vector<int>> disadmi(n, vector<int>(m, 1e9));
    vector<vector<pii>> parent(n, vector<pii>(m, pii(-2, -2)));
    queue<pii> mons , admi ;

    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            if (arr[i][j] == 'M') {
                mons.push({i, j});
                dismons[i][j] = 0;
            } else if (arr[i][j] == 'A') {
                admi.push({i, j});
                disadmi[i][j] = 0;
                parent[i][j] = { -1, -1};
            }
        }
    }
    auto isValid = [&](int row , int col  ) {
        if (row >= n or col >= m or row < 0 or col < 0 or  vis[row][col] or arr[row][col] == '#' ) return false ;
        return true ;
    };
    while (mons.size()) {
        pii curr = mons.front();
        mons.pop();
        int curDis = dismons[curr.ff][curr.ss];
        for (int k = 0 ; k < 4 ; k++) {
            int x = dx[k] + curr.ff , y = dy[k] + curr.ss;
            if (isValid(x, y) and   dismons[x][y] > curDis + 1 ) {
                dismons[x][y] = curDis + 1;
                mons.push({x, y});
            }

        }
    }

    vis.clear();
    vis.assign(n, vector<int> (m));

    while (admi.size()) {
        pii curr = admi.front();
        admi.pop();
        int curDis = disadmi[curr.ff][curr.ss];
        for (int k = 0 ; k < 4 ; k++) {
            int x = dx[k] + curr.ff , y = dy[k] + curr.ss;
            if (isValid(x, y) and   disadmi[x][y] > curDis + 1 ) {
                disadmi[x][y] = curDis + 1;
                admi.push({x, y});
                parent[x][y] = { curr.ff, curr.ss};
            }

        }
    }

    int mini = 1e9 + 10 , t = 0 , chox = -1 , choy = -1 ;
    for (int i = 0 ; i < m ; i++) {
        if (disadmi[0][i] != 1e9 and disadmi[0][i] < dismons[0][i]) {
            t = 1 ;
            if (mini >  disadmi[0][i]) {
                mini = disadmi[0][i];
                chox = 0 , choy = i;
            }
        }

        if (disadmi[n - 1][i] != 1e9 and disadmi[n - 1][i] < dismons[n - 1][i]) {
            t = 1 ;
            if (mini >  disadmi[n - 1][i]) {
                mini = disadmi[n - 1][i];
                chox = n - 1 , choy = i;

            }
        }
    }
    for (int i = 0 ; i < n ; i++) {
        if (disadmi[i][0] != 1e9 and disadmi[i][0] < dismons[i][0]) {
            t = 1 ;
            if (mini >  disadmi[i][0]) {
                mini = disadmi[i][0];
                chox = i , choy = 0;

            }
        }

        if (disadmi[i][m - 1] != 1e9 and disadmi[i][m - 1] < dismons[i][m - 1]) {
            t = 1 ;
            if (mini >  disadmi[i][m - 1]) {
                mini = disadmi[i][m - 1];
                chox = i , choy = m - 1;
            }
        }

    }
    db(parent)

    if (t) {
        YES
        cout << mini << nline ;
    } else {
        NO
        return ;
    }

    map<pii, char> mpp;
    mpp[ {0, 1}] = 'R';
    mpp[ { -1, 0}] = 'U';
    mpp[ { 1, 0}] = 'D';
    mpp[ {0, -1}] = 'L';
    string ans = "";
    while (chox != -1 and choy != -1) {
        // cout << chox << " " << choy << nline ;
        int parx = parent[chox][choy].ff;
        int pary = parent[chox][choy].ss;
        int xx  = chox - parx;
        int yy  = choy - pary;
        if (xx <= 1 and xx >= -1 and yy >= -1 and yy <= 1)
            ans += (mpp[ {xx, yy}]);
        chox = parx;
        choy = pary;

    }
    reverse(all(ans));
    if (mini != 0)
        cout << ans << nline ;
}
int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    jay_shri_ram;
    solve();
}
/*----------------------------------endsHere----------------------------------*/