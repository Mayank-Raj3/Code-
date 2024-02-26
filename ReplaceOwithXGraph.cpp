//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
	vector<vector<char>> fill(int n, int m, vector<vector<char>> mat) {
		queue<pair<int, int>>q ;
		vector<vector<char>> ans = mat ;

		auto is_valid = [&](int row , int col ) {
			if (row >= 0 && row < n && col >= 0 && col < m && ans[row][col] == 'O') {
				return true ;
			} else {
				return false ;
			}
		};
		int dx[] = {0, 1, 0,  -1};
		int dy[] = {1, 0, -1, 0};

		function<void(int, int)> dfs = [&](int row  , int col ) {
			ans[row][col] = 'N';
			for (int i = 0 ; i < 4 ; i++) {
				int x = row + dx[i];
				int y = col + dy[i];
				if (is_valid(x, y)) {
					dfs(x, y);
				}
			}
		};

		for (int i  = 0; i < n; i++) {
			for (int j = 0 ; j < m ; j++) {
				if (((i == 0 || i == n - 1) || (j == 0 || j == m - 1)) && mat[i][j] == 'O') {
					dfs(i, j);
				}
			}
		}

		/*	if (q.empty()) {
				for (int i = 0 ; i < n; i++) {
					for (int j = 0 ; j < m ; j++) {
						ans[i][j] = 'X';
					}
				}
				return ans ;
			}

			while (!q.empty()) {
				auto node = q.front();
				q.pop();
				for (int i = 0 ; i < 4 ; i++) {
					int x = node.first + dx[i];
					int y = node.second + dy[i];
					if (is_valid(x, y)) {
						ans[x][y] = 'N';
						q.push({x, y});
					}
				}
			}*/
		for (int i = 0 ; i < n ; i++)
			for (int j = 0 ; j < m ; j++)
				if (ans[i][j] == 'O')
					ans[i][j] = 'X';
				else if (ans[i][j] == 'N')
					ans[i][j] = 'O';




		return ans ;
	}
};

//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<vector<char>> mat(n, vector<char>(m, '.'));
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> mat[i][j];

		Solution ob;
		vector<vector<char>> ans = ob.fill(n, m, mat);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << ans[i][j] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends