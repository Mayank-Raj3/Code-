
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
void dfs(int node , vector<int> &vis, vector<int> adj[]) {
	vis[node] = 1;
	for (auto it : adj[node]) {
		if (!vis[it])
			dfs(it, vis, adj);
	}
}

int numProvinces2(vector<vector<int>> adj, int V) {
	vector<int> adjLs[V];

	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			if (i != j && adj[i][j] == 1) {
				adjLs[i].push_back(j);
				adjLs[j].push_back(i);
			}
		}
	}


	vector<int> vis(V);
	queue<int> q;
	q.push(0);

	int cnt = 0 ;
	for (int i = 0 ; i < V ; i++) {
		if (!vis[i]) {
			cnt++;
			dfs(i, vis, adjLs);
		}
	}
	return cnt;
}

int numProvinces(vector<vector<int>> adj, int V) {
	vector<int> adjLs[V];

	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			if (i != j && adj[i][j] == 1) {
				adjLs[i].push_back(j);
				adjLs[j].push_back(i);
			}
		}
	}

	vector<int> vis(V);
	int count = 0;
	queue<int>q;
	/*
	auto dfs = [&](int node ) {
		vis[node] = 1;
		for (auto it : adj[node]) {
			if (!vis[it])
				dfs(it, vis, adj);
		}
	}
	*/
	auto bfs = [&](int i ) {
		q.push(i);
		while (!q.empty()) {
			int node = q.front();
			q.pop();
			vis[node] = 1;
			for (auto i : adjLs[node]) {
				if (vis[i] != 1)
					q.push(i);
			}
		}
	};

	for (int i = 0; i < V ; i++) { // for connected component
		if (vis[i] != 1) {
			count++; //means that bfs
			bfs(i);
		}

	}
	return count;
}
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
	jay_shri_ram;

	int t ; cin >> t;
	//int t=1;

	while (t--) {
		int V, x;
		cin >> V;

		vector<vector<int>> adj;

		for (int i = 0; i < V; i++)
		{
			vector<int> temp;
			for (int j = 0; j < V; j++)
			{
				cin >> x;
				temp.push_back(x);
			}
			adj.push_back(temp);
		}

		cout << numProvinces(adj, V) << endl;

	}
}
/* -----------------END OF PROGRAM --------------------*/
