//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
#define ff first
#define ss second

class Solution {
	vector<int> topoSort(int V, vector<pair<int, int>> adj[]) {
		vector<int> vis(V, 0), indegree(V, 0), topo;
		for (int i = 0 ; i < V ; i++) {
			for (auto it : adj[i]) {
				indegree[it.ff]++;
			}
		}
		queue<int>  q;
		for (int i = 0 ; i < V ; i++) {
			if (indegree[i] == 0) {
				q.push(i);
			}
		}

		while (q.size() != 0) {
			int node = q.front();
			topo.push_back(node);
			q.pop();
			for (auto it : adj[node]) {
				indegree[it.ff]--;
				if (indegree[it.ff] == 0) {
					q.push(it.ff);
				}
			}
		}

		return topo;
	}

public:
	vector<int> shortestPath(int N, int M, vector<vector<int>>& edges) {
		vector<pair<int, int>> adj[N];
		for (int i = 0 ; i < M ; i++) {
			adj[edges[i][0]].push_back({edges[i][1], edges[i][2]});
		}
		vector<int> topo = topoSort(N, adj);
		vector<int> dis(N);
		for (int i = 0 ; i < N ; i++) {
			dis[i] = 1e9;
		}

		dis[0] = 0;
		for (int i = 0 ; i < N ; i++) {
			int node = topo[i];
			for (auto it : adj[node]) {
				dis[it.ff] = min(dis[it.ff], (dis[node] + it.ss));
			}
		}
		// topological sort is working because it makes sure that the
		//node which comes before  is already explored
		// for example 5 4 3  2 1
		// if we want
		for (auto &it : dis) {
			if (it == 1e9) {
				it = -1;
			}
		}
		return dis;
	}
};


//{ Driver Code Starts.
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<vector<int>> edges;
		for (int i = 0; i < m; ++i) {
			vector<int> temp;
			for (int j = 0; j < 3; ++j) {
				int x; cin >> x;
				temp.push_back(x);
			}
			edges.push_back(temp);
		}
		Solution obj;
		vector<int> res = obj.shortestPath(n, m, edges);
		for (auto x : res) {
			cout << x << " ";
		}
		cout << "\n";
	}
}

// } Driver Code Ends