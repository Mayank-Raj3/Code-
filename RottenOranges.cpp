//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	int orangesRotting(vector<vector<int>>& grid) {
		queue<pair<int, int>> q ;
		int n = grid.size();
		int m = grid[0].size();
		int ones = 0 ;
		for (int i = 0 ; i < n; i++) {
			for (int j = 0 ; j < m ; j++) {
				if (grid[i][j] == 2) {
					q.push({i, j});
				} else if (grid[i][j] == 1) {
					ones++;
				}
			}
		}
		int dx[] = { -1, 0, +1, 0};
		int dy[] = {0, +1, 0, -1};

		auto is_valid = [&](int row , int col ) {
			if (row >= 0 && row < n && col >= 0 && col < m && grid[row][col] == 1) {
				return true ;
			} else {
				return false ;
			}
		};

		int time = 0 ;
		auto bfs = [&]() {
			while (q.size() != 0) {
				if (ones != 0)
					time++;
				int x = q.size();
				for (int i = 0 ; i < x; i++) {
					pair<int, int> node = q.front();
					q.pop();
					for (int k = 0 ; k < 4 ; k++) {
						int x = node.first + dx[k];
						int  y = node.second + dy[k];
						if (is_valid(x, y)) {
							ones--;
							q.push({x, y});
							grid[x][y] = 2;
						}
					}
				}


			}
		};
		bfs();

		if (!ones) {
			return time;
		} else {
			return -1 ;
		}

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
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
