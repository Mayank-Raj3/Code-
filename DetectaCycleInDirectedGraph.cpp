//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // cycle tab he milega jab path phle se visited hoga
        vector<int> path(V, 0), vis(V, 0);
        function<bool( int)> dfs = [&](int node) {
            vis[node] = 1;
            path[node] = 1;
            for (auto it : adj[node]) {
                if (!vis[it] && (dfs(it)))
                    return true;
                else  if (path[it]) {
                    return true;
                }
            }
            path[node] = 0;
            return false ;
        };
        for (int i = 0 ; i < V ; i++) {
            if (!vis[i])
                if (dfs(i)) return true;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends