//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	vector<vector<int>>nearest(vector<vector<int>>grid) {
		int n = grid.size(), m = grid[0].size();
		vector<vector<int>> vis(n, vector<int>(m, 0));
		vector<vector<int>> ans(n, vector<int>(m, 0));
		queue<pair<int, int> > q ;
		for (int i = 0  ; i < n; i++) {
			for (int j = 0 ; j < m; j++) {
				if (grid[i][j] == 1)
					q.push( {i, j});
			}
		}

		auto valid = [&](int row , int col  ) {
			if ( row < n && row >= 0 && col >= 0 && col < m && !vis[row][col] && grid[row][col] == 0 ) {
				return true ;
			}
			else {
				return false ;
			}
		};

		int dx[] = {0, 1, 0,  -1};
		int dy[] = {1, 0, -1, 0};
		int stp = 0 ;
		while (q.size() != 0) {
			int curr =  q.size() ;
			stp++; // using this we can know the distance or the level we r in
			for (int i = 0 ; i < curr; i++) { //how much distace u r in
				auto node = q.front();
				int fx = node.first;
				int  fy = node.second;
				q.pop();
				for (int j = 0 ; j < 4 ; j++) {
					int x = dx[j] + fx;
					int y = dy[j] + fy;
					if (valid(x, y)) {
						vis[x][y] = 1 ;
						ans[x][y] = stp ;
						q.push({x, y});
					}
				}
			}

		}

		return ans ;
	}
};

//{ Driver Code Starts.
int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for (auto i : ans) {
			for (auto j : i) {
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends