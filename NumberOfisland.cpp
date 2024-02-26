
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


int numIslands(vector<vector<char>>& grid) {
	int n = grid.size();
	int m = grid[0].size();
	int cnt = 0 ;
	vector<vector<int>> vis(n, vector<int>(m, 0));
	queue<pair<int, int>> q ;
	int dRow[] = { 0, 1, 1, 1, 0, -1, -1, -1 };
	int dCol[] = { -1, -1, 0, 1, 1, 1, 0, -1 };

	auto  isValid = [&](int row , int col) {
		if (row < 0 || col < 0 || row >= n || col >= m)
			return false;

		if (vis[row][col])
			return false;
		if (grid[row][col] == '1' && vis[row][col] != 1) {
			return true;
		}
		else
			return false ;

	};
	function<void(int, int)> dfs = [&](int i, int  j) {
		vis[i][j] = 1;
		for (int i = 0; i < 8; i++) {
			int adjx = i + dRow[i];
			int adjy = j + dCol[i];

			if (isValid( adjx, adjy)) {
				dfs(adjx, adjy);
			}
		}

	};

	// auto bfs = [&](int i, int  j) {

	// 	while (!q.empty()) {
	// 		pair<int, int> node = q.front();
	// 		q.pop();
	// 		for (int i = 0; i < 8; i++) {
	// 			int adjx = node.ff + dRow[i];
	// 			int adjy = node.ss + dCol[i];

	// 			if (isValid( adjx, adjy)) {
	// 				q.push({ adjx, adjy });
	// 				vis[adjx][adjy] = 1;
	// 			}
	// 		}
	// 	}

	// };
	for (int i = 0 ; i < n; i ++) {
		for (int j = 0 ; j < m ; j++) {
			if (grid[i][j] == '1' && vis[i][j] != 1) {
				cnt++;
				// q.push({i, j});
				dfs(i, j);

			}
		}
	}
	return cnt ;

}


int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
	jay_shri_ram;

	int t ; cin >> t;
	//int t=1;

	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<vector<char>> grid(n, vector<char>(m, '#'));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> grid[i][j];
			}
		}
		int ans = numIslands(grid);
		cout << ans << '\n';
	}
}
/* -----------------END OF PROGRAM --------------------*/



/*

16)https://codeforces.com/problemset/problem/1475/A
17)https://codeforces.com/problemset/problem/1468/N
15)https://codeforces.com/problemset/problem/1496/A
18)https://codeforces.com/contest/1829/problem/D
19)https://codeforces.com/problemset/problem/1811/B
20)https://codeforces.com/problemset/problem/1800/C1
21)https://codeforces.com/contest/1800/problem/B
22)https://codeforces.com/problemset/problem/1614/B
23)https://codeforces.com/problemset/problem/1569/B
24)https://codeforces.com/problemset/problem/1550/B
25)https://codeforces.com/problemset/problem/1562/B
26)https://codeforces.com/problemset/problem/1515/B
27)https://codeforces.com/problemset/problem/1490/B
28)https://codeforces.com/problemset/problem/1485/A
29)https://codeforces.com/problemset/problem/1474/B
30)https://codeforces.com/contest/1469/problem/B
31)https://codeforces.com/contest/1447/problem/B
32)https://codeforces.com/problemset/problem/1359/B
33)https://codeforces.com/problemset/problem/1829/E
34)https://codeforces.com/contest/1826/problem/B
35)https://codeforces.com/contest/1820/problem/B
36)https://codeforces.com/contest/1811/problem/C
37)https://codeforces.com/contest/1807/problem/G2
38)https://codeforces.com/contest/1788/problem/B
39)https://codeforces.com/problemset/problem/1787/B
40)https://codeforces.com/problemset/problem/1762/B
41)https://codeforces.com/problemset/problem/1760/E
42)https://codeforces.com/contest/1741/problem/C
43)https://codeforces.com/contest/1729/problem/C
44)https://codeforces.com/contest/1790/problem/D
45)https://codeforces.com/contest/1744/problem/D
46)https://codeforces.com/contest/1742/problem/E
47)https://codeforces.com/contest/1681/problem/C
48)https://codeforces.com/contest/1656/problem/C
49)https://codeforces.com/problemset/problem/1650/C
50)https://codeforces.com/problemset/problem/1619/C
51)https://codeforces.com/problemset/problem/1613/C
52)https://codeforces.com/contest/1598/problem/C
53)https://codeforces.com/problemset/problem/1514/B
54)https://codeforces.com/problemset/problem/1420/B
55)https://codeforces.com/problemset/problem/1406/B
56)https://codeforces.com/problemset/problem/1409/C
57)https://codeforces.com/problemset/problem/1328/C
58)https://codeforces.com/problemset/problem/1352/C
59)https://codeforces.com/contest/1343/problem/C
60)https://codeforces.com/contest/1352/problem/B
61)https://codeforces.com/problemset/problem/1822/D
62)https://codeforces.com/contest/1608/problem/B
63)https://codeforces.com/contest/776/problem/B
64)https://codeforces.com/problemset/problem/1602/B
65)https://codeforces.com/problemset/problem/1523/B
66)https://codeforces.com/problemset/problem/682/A
67)https://codeforces.com/problemset/problem/1520/C
68)https://codeforces.com/problemset/problem/1405/B
69)https://codeforces.com/problemset/problem/1433/C
70)https://codeforces.com/problemset/problem/1436/B
71)https://codeforces.com/problemset/problem/805/B
72)https://codeforces.com/contest/1144/problem/C
73)https://codeforces.com/problemset/problem/1747/B
74)https://codeforces.com/problemset/problem/1634/C
75)https://codeforces.com/contest/1691/problem/B





17)
15)
18)
19)
20)
21)
22)
23)
24)
25)
26)
27)
28)
29)
30)
31)
32)
33)
34)
35)
36)
37)
38)
39)
40)
41)
42)
43)
44)
45)
46)
47)
48)
49)
50)
51)
52)
53)
54)
55)
56)
57)
58)
59)
60)
61)
62)
63)
64)
65)
66)
67)
68)
69)
70)
71)
72)
73)
74)
75)



https://codeforces.com/problemset/problem/698/A
https://atcoder.jp/contests/abc211/tasks/abc211_c
https://codeforces.com/problemset/problem/189/A
https://codeforces.com/contest/628/problem/B
https://cses.fi/problemset/task/1633
https://cses.fi/problemset/task/1634
https://cses.fi/problemset/task/1635
https://cses.fi/problemset/task/1636
https://cses.fi/problemset/task/1637
 https://cses.fi/problemset/task/1638
 https://cses.fi/problemset/task/1158
 https://cses.fi/problemset/task/1746
 https://cses.fi/problemset/task/1745
 https://cses.fi/problemset/task/1093
 https://atcoder.jp/contests/abc298/tasks/abc298_e
 https://codeforces.com/problemset/problem/44/E
 https://codeforces.com/problemset/problem/180/C
 https://codeforces.com/problemset/problem/1195/C
 https://codeforces.com/problemset/problem/1245/C
 https://codeforces.com/problemset/problem/1005/D
 https://atcoder.jp/contests/dp/tasks/dp_b
 https://atcoder.jp/contests/dp/tasks/dp_c https://atcoder.jp/contests/dp/tasks/dp_d
 https://atcoder.jp/contests/dp/tasks/dp_e
 https://atcoder.jp/contests/abc286/tasks/abc286_d
 https://atcoder.jp/contests/abc300/tasks/abc300_e
 https://atcoder.jp/contests/abc240/tasks/abc240_c
 https://atcoder.jp/contests/abc245/tasks/abc245_c
 https://atcoder.jp/contests/abc242/tasks/abc242_c
 https://atcoder.jp/contests/abc232/tasks/abc232_d
 https://atcoder.jp/contests/abc289/tasks/abc289_d
 https://atcoder.jp/contests/abc220/tasks/abc220_d
 https://atcoder.jp/contests/abc291/tasks/abc291_d
 https://atcoder.jp/contests/abc248/tasks/abc248_c
 https://atcoder.jp/contests/abc129/tasks/abc129_c
 https://atcoder.jp/contests/abc261/tasks/abc261_d
 https://atcoder.jp/contests/abc204/tasks/abc204_d
 https://atcoder.jp/contests/abc266/tasks/abc266_d
 https://atcoder.jp/contests/abc222/tasks/abc222_d
 https://atcoder.jp/contests/abc267/tasks/abc267_d
 https://atcoder.jp/contests/abc271/tasks/abc271_d
 https://atcoder.jp/contests/abc274/tasks/abc274_d
 https://atcoder.jp/contests/abc263/tasks/abc263_d
 https://atcoder.jp/contests/abc281/tasks/abc281_d
 https://atcoder.jp/contests/abc253/tasks/abc253_e
 https://atcoder.jp/contests/abc244/tasks/abc244_e
 https://atcoder.jp/contests/abc262/tasks/abc262_d
 https://atcoder.jp/contests/abc251/tasks/abc251_e
 https://atcoder.jp/contests/abc179/tasks/abc179_d
 https://atcoder.jp/contests/abc180/tasks/abc180_e
 https://atcoder.jp/contests/abc270/tasks/abc270_d
 https://codeforces.com/problemset/problem/1741/E
 https://codeforces.com/problemset/problem/1625/C
 https://codeforces.com/problemset/problem/977/F
 https://codeforces.com/problemset/problem/607/A
 https://codeforces.com/problemset/problem/474/D
 https://codeforces.com/problemset/problem/429/B
 https://codeforces.com/problemset/problem/269/B
 https://codeforces.com/contest/176/problem/B
 https://codeforces.com/problemset/problem/106/C
 https://leetcode.com/problems/partition-array-for-maximum-sum/
 https://leetcode.com/problems/longest-palindromic-subsequence/
 https://leetcode.com/problems/house-robber/
 https://leetcode.com/problems/maximum-product-subarray/
 https://leetcode.com/problems/longest-palindromic-substring/
 https://leetcode.com/problems/count-palindromic-subsequences/
 https://www.codechef.com/problems/LWS
 https://www.codechef.com/problems/NEWREST
 https://www.codechef.com/problems/AEHASH
 https://www.codingninjas.com/codestudio/problems/maximize-sum_1376445?leftPanelTab=0
 https://leetcode.com/problems/longest-palindromic-substring/
 https://leetcode.com/problems/minimum-path-sum/
 https://leetcode.com/problems/edit-distance/
 https://leetcode.com/problems/climbing-stairs/
 https://leetcode.com/problems/maximum-alternating-subsequence-sum
https://codeforces.com/contest/1566/problem/C




1)	https://atcoder.jp/contests/abc274/tasks/abc274_c
2)	https://atcoder.jp/contests/abc264/tasks/abc264_d
3)	https://atcoder.jp/contests/abc277/tasks/abc277_c
4)	https://atcoder.jp/contests/abc211/tasks/abc211_d
5)	https://atcoder.jp/contests/abc168/tasks/abc168_d
6)	https://atcoder.jp/contests/abc235/tasks/abc235_d
7)	https://atcoder.jp/contests/abc228/tasks/abc228_b
8)	https://atcoder.jp/contests/abc265/tasks/abc265_c
9)	https://atcoder.jp/contests/abc293/tasks/abc293_c
10) https://atcoder.jp/contests/abl/tasks/abl_c
11) https://atcoder.jp/contests/abc226/tasks/abc226_c
12) https://atcoder.jp/contests/abc233/tasks/abc233_c
13) https://atcoder.jp/contests/abc213/tasks/abc213_d
14) https://atcoder.jp/contests/abc177/tasks/abc177_d
15) https://atcoder.jp/contests/abc206/tasks/abc206_d
16) https://atcoder.jp/contests/abc284/tasks/abc284_e
17) https://atcoder.jp/contests/abc276/tasks/abc276_e
18) https://atcoder.jp/contests/abc075/tasks/abc075_c
19) https://atcoder.jp/contests/abc198/tasks/abc198_e
20) https://atcoder.jp/contests/abc236/tasks/abc236_d
21) https://atcoder.jp/contests/abc268/tasks/abc268_d
22) https://atcoder.jp/contests/abc254/tasks/abc254_e
23) https://atcoder.jp/contests/abc224/tasks/abc224_d
24) https://atcoder.jp/contests/m-solutions2019/tasks/m_solutions2019_d
25) https://atcoder.jp/contests/abc240/tasks/abc240_e
26) https://cses.fi/problemset/task/1192
27) https://cses.fi/problemset/task/1193
28) https://cses.fi/problemset/task/1666
29) https://cses.fi/problemset/task/1667
30) https://cses.fi/problemset/task/1668
31) https://cses.fi/problemset/task/1669
32) https://cses.fi/problemset/task/1194
33) https://cses.fi/problemset/task/1674
34) https://cses.fi/problemset/task/1130
35) https://cses.fi/problemset/task/1131
36) https://cses.fi/problemset/task/1132
37) https://cses.fi/problemset/task/1133
38) https://leetcode.com/problems/number-of-islands/
39) https://leetcode.com/problems/surrounded-regions/
40) https://codeforces.com/problemset/problem/813/C
41) https://codeforces.com/problemset/problem/1027/D
42) https://codeforces.com/problemset/problem/1037/D
43) https://codeforces.com/problemset/problem/1093/D
44) https://codeforces.com/problemset/problem/1144/F
45) https://codeforces.com/problemset/problem/1209/D
46) https://codeforces.com/problemset/problem/1411/C
47) https://codeforces.com/problemset/problem/131/D
48) https://codeforces.com/problemset/problem/377/A
49) https://codeforces.com/problemset/problem/616/C
50) https://codeforces.com/problemset/problem/103/B
51) https://codeforces.com/problemset/problem/1006/E
52) https://codeforces.com/problemset/problem/510/B
53) https://codeforces.com/problemset/problem/580/C
54) https://codeforces.com/problemset/problem/1676/G
55) https://codeforces.com/problemset/problem/839/C
56) https://codeforces.com/problemset/problem/687/A
57) https://codeforces.com/contest/1143/problem/C
58) https://codeforces.com/problemset/problem/913/B
59) https://codeforces.com/problemset/problem/981/C
60) https://codeforces.com/problemset/problem/763/A
61) https://codeforces.com/problemset/problem/1593/E
62) https://codeforces.com/problemset/problem/979/C
63) https://codeforces.com/problemset/problem/369/C
64) https://codeforces.com/problemset/problem/1363/C
65) https://codeforces.com/contest/1714/problem/F
66) https://codeforces.com/problemset/problem/1714/G
67) https://codeforces.com/problemset/problem/161/D
68) https://codeforces.com/problemset/problem/1702/E
69) https://codeforces.com/problemset/problem/1760/G
70) https://codeforces.com/problemset/problem/277/A
71) https://codeforces.com/problemset/problem/107/A
72) https://codeforces.com/problemset/problem/60/B
73) https://codeforces.com/problemset/problem/1263/D
74) https://codeforces.com/problemset/problem/977/E
75) https://codeforces.com/problemset/problem/930/A


*/
