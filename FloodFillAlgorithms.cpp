//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
		int n = image.size();
		int m = image[0].size();
		int initial_color = image[sr][sc];
		vector<vector<int>> ans = image;

		int dx[] = { -1, 0, +1, 0};
		int dy[] = {0, +1, 0, -1};


		auto is_valid = [&](int row , int col ) {
			if (row >= 0 && row < n && col >= 0 && col < m &&
			        image[row][col] == initial_color && ans[row][col] != newColor) {
				return true;
			}
			else
				return false ;
		};

		queue<pair<int, int>> q  ;
		auto bfs = [&](int row , int col ) {

			while (q.size() != 0) {
				pair<int, int> curr = q.front();
				q.pop();
				for (int i = 0 ; i < 4 ; i++) {
					int x = curr.first + dx[i];
					int y = curr.second + dy[i];
					if (is_valid(x, y)) {
						ans[x][y] = newColor;
						q.push({x, y});
					}

				}

			}
		};

		q.push({sr, sc});
		ans[sr][sc] = newColor;
		bfs(sr, sc);

		/*
				function<void(int, int)> dfs = [&](int row , int col) {
					ans[row][col] = newColor;
					for (int i = 0 ; i < 4 ; i++) {
						int x = row + dx[i];
						int y = col + dy[i];
						if (is_valid(x, y)) {
							dfs(x, y);
						}
					}
				};

				dfs(sr , sc );
		*/

		return ans;


	}
};

//{ Driver Code Starts.
int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m, 0));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for (auto i : ans) {
			for (auto j : i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends