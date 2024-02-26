//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


/*
 the one who statrs the cycle and all the nodes in
  the path of cycle are not safe nodes

    we can keep a track of using an extra array and calculate it useing dfs

*/

class Solution {
public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        vector<int> path(V, 0), vis(V, 0), ans(V, 0);
        function<bool( int)> dfs = [&](int node) {
            vis[node] = 1;
            path[node] = 1;
            ans[node] = 0;
            // starting of cycle assums
            for (auto it : adj[node]) {
                if (!vis[it] && (dfs(it))) {
                    ans[it] = 0;
                    return true;
                }
                else if (path[it]) {
                    // agr path visted ha phle se tho cycle ha
                    ans[it] = 0;
                    return true;
                }
            }
            // mtlb no cycle found so check = 1 and path = 1
            ans[node] = 1;
            path[node] = 0;
            return false ;
        };

        for (int i = 0 ; i < V ; i++) {
            if (!vis[i])
                if (dfs(i)) {
                    // true return kar rha dfs mtlb cycle tha
                    ans[i] = 0;
                }
        }


        vector<int > safenodes;
        for (int i = 0 ; i < V; i++) {
            if (ans[i]) safenodes.push_back(i);
        }
        return safenodes;
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
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends