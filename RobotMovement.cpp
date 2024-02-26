#include<bits/stdc++.h>
using namespace std;
#define int                           long long
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
#define gcd(a, b)                     __gcd(a, b)
#define PI                            3.141592653589793238462
#define sz(x) (                       (int)(x).size())
#define jay_shri_ram                  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Builtin data types
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
    used when we want next prev element efficently
*/
void solve() {
    int n , r , c , x , y ;
    cin >> n >> r >> c >> x >> y ;
    string s; cin >> s ;
    vector<set<int>> alreadyInRow(r + 1), nextAvInRow(r + 1) , prevNextAvInRow(r + 1);
    vector<set<int>> alreadyInCol(c + 1), nextAvInCol(c + 1) , prevNextAvInCol(c + 1);
    auto insert  = [&](int x , int y ) {
        alreadyInRow[x].insert(y);
        prevNextAvInRow[x].erase(y);
        nextAvInRow[x].erase(y);
        if (!alreadyInRow[x].count(y - 1))  prevNextAvInRow[x].insert(y - 1);
        if (!alreadyInRow[x].count(y + 1)) nextAvInRow[x].insert(y + 1);

        alreadyInCol[y].insert(x);
        prevNextAvInCol[y].erase(x);
        nextAvInCol[y].erase(x);
        if (!alreadyInCol[y].count(x + 1))  nextAvInCol[y].insert(x + 1);
        if (!alreadyInCol[y].count(x - 1)) prevNextAvInCol[y].insert(x - 1);
    };
    auto UP = [&](int x , int y ) {
        //col fixed , search in row
        return *nextAvInCol[y].upper_bound(x);
    };
    auto DOWN = [&](int x , int y ) {
        auto it =  prevNextAvInCol[y].lower_bound(x);
        it--;
        return *it;
    };
    auto LEFT = [&](int x , int y ) {
        auto it = prevNextAvInRow[x].lower_bound(y);
        it--;
        return *it;
    };
    auto RIGHT = [&](int x , int y ) {
        return *nextAvInRow[x].upper_bound(y);
    };
    for (auto it : s) {
        if (it == 'S') it = 'N';
        else if (it == 'N') it = 'S';
        if (it == 'N') {
            insert(x, y);
            x = UP(x, y);
        }
        else if (it == 'S') {
            insert(x, y);
            x = DOWN(x, y);
        }
        else if (it == 'E') {
            insert(x, y);
            y = RIGHT(x, y);
        }
        else {
            insert(x, y);
            y = LEFT(x, y);
        }
    }
    cout << x << " " << y << nline;
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