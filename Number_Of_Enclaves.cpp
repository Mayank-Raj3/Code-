//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
	int numberOfEnclaves(vector<vector<int>> &grid) {
		int n = grid.size(), m = grid[0].size();
		vector<vector<int>> ans = grid ;
		auto is_valid = [&](int row , int col ) {
			if (row >= 0 && row < n && col >= 0 && col < m && ans[row][col] == 1) {
				return true ;
			} else {
				return false ;
			}
		};
		int dx[] = {0, 1, 0,  -1};
		int dy[] = {1, 0, -1, 0};

		function<void(int, int)> dfs = [&](int row  , int col ) {
			ans[row][col] = 99;
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
				if (((i == 0 || i == n - 1) || (j == 0 || j == m - 1)) && grid[i][j] == 1) {
					dfs(i, j);
				}
			}
		}


		int res = 0 ;
		for (int i = 0 ; i < n ; i++)
			for (int j = 0 ; j < m ; j++)
				if (ans[i][j] == 1)
					res++;

		return res ;


	}
};


//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<vector<int>> grid(n, vector<int>(m));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> grid[i][j];
			}
		}
		Solution obj;
		cout << obj.numberOfEnclaves(grid) << endl;
	}
}
// } Driver Code Ends