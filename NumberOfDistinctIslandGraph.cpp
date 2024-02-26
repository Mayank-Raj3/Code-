//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// User function Template for C++

class Solution {
public:
	int countDistinctIslands(vector<vector<int>>& grid) {
		int n =  grid.size(), m = grid[0].size();
		vector<vector<int>> vis(n , vector<int>(m, 0));
		set<string> st ;
		auto is_valid = [&](int row , int col  ) {
			if ( row >= 0 && row < n && col >= 0 && col < m && grid[row][col] == 1 && vis[row][col] == 0  ) {
				return true ;
			} else {
				return false ;
			}
		};
		int dx[] = {0, 1, 0,  -1};
		int dy[] = {1, 0, -1, 0};
		string cnt = "";
		map<int , char> mpp;
		mpp[0] = 'U';
		mpp[1] = 'R';
		mpp[2] = 'D';
		mpp[3] = 'L';
		function<void(int, int)> dfs = [&](int row  , int col ) {
			vis[row][col] = 1;
			for (int i = 0 ; i < 4 ; i++) {
				int x = row + dx[i];
				int y = col + dy[i];
				if (is_valid(x, y)) {
					cnt += mpp[i];
					dfs(x, y);
				}
			}
			cnt += '$';

		};

		for (int i = 0  ; i < n ; i++) {
			for (int j = 0 ; j < m ; j++) {
				if (grid[i][j] == 1 && vis[i][j] != 1) {
					dfs(i, j);
					st.insert(cnt);
					cnt = "";

				}
			}
		}
		for (auto it : st) {
			cout << it << " ";
		}
		return st.size();

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
		cout << obj.countDistinctIslands(grid) << endl;
	}
}
// } Driver Code Ends