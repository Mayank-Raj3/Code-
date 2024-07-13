
class Solution {
public:
    vector<int> maximumDistance(vector<vector<int>> edges, int n, int e, int src) {
        vector<vector<pair<int, int>>> adj(n);
        for (auto it : edges) {
            adj[it[0]].push_back({it[1], -it[2]});
        }

        stack<int> topo;
        vector<int> vis(n, 0), dis(n, INT_MAX);

        function<void(int)> dfs = [&](int node) {
            vis[node] = 1;
            for (auto it : adj[node]) {
                if (!vis[it.first]) {
                    dfs(it.first);
                }
            }
            topo.push(node);
        };

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfs(i);
            }
        }

        vis.assign(n, 0);
        dis[src] = 0;

        while (!topo.empty()) {
            int node = topo.top();
            topo.pop();
            vis[node] = 1;
            if (dis[node] != INT_MAX) {
                for (auto it : adj[node]) {
                    int v = it.first, w = it.second;
                    if (dis[node] + w < dis[v]) {
                        dis[v] = dis[node] + w;
                    }
                }
            }
        }

        for (auto &it : dis) {
            if (it == INT_MAX) {
                it = INT_MIN;
            } else {
                it = -it;
            }
        }

        return dis;
    }
};



//DP solution
class Solution {
public:
    vector <int> maximumDistance(vector<vector<int>> edges, int v, int e, int src) {

        vector<pair<int, int>>adj[v];
        for (auto i : edges) {
            adj[i[1]].push_back({i[0], i[2]});
        }

        vector<int>dis(v, -1);

        function<int(int)>dfs = [&](int node) {
            if (node == src) return 0;
            if (dis[node] != -1 ) return dis[node];

            int ans = -1e9;
            for (auto i : adj[node]) {
                ans = max(ans, i.second + dfs(i.first));
            }

            return dis[node] = ans;

        };

        vector<int> ans;
        for (int i = 0; i < v; i++) {

            int p = dfs(i);
            if (p >= -1000)
                ans.push_back(p);
            else
                ans.push_back(INT_MIN);
        }
        return ans;

    }
};


// Belman Ford
class Solution {
public:
    vector<int> maximumDistance(vector<vector<int>> edges, int n, int e, int src) {
        vector<vector<pair<int, int>>> adj(n);
        for (auto it : edges) {
            adj[it[0]].push_back({it[1], it[2]});
        }

        vector<int> dis(n, INT_MIN);
        dis[src] = 0;

        for (int i = 0; i < n - 1 ; ++i) {
            for (const auto &it : edges) {
                int u = it[0], v = it[1], w = it[2];
                if (dis[u] != INT_MIN && dis[u] + w > dis[v]) {
                    dis[v] = dis[u] + w;
                }
            }
        }

        for (const auto &it : edges) {
            int u = it[0] , v = it[1], w = it[2];

            if (dis[u] != INT_MIN && dis[u] + w > dis[v]) {
                dis[v] = INT_MIN;
            }
        }

        return dis;
    }
};




vector <int> maximumDistance(vector<vector<int>> edges, int v, int e, int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});
    vector<int> dist(v, INT_MIN); // take dist as min
    dist[src] = 0;
    vector<vector<int>> adj[v];
    for (int i = 0; i < edges.size(); i++) {

        int u = edges[i][0];
        int v = edges[i][1];
        int w = edges[i][2];

        adj[u].push_back({v, w});
    }

    while (!pq.empty())
    {
        pair<int, int> top = pq.top();
        pq.pop();
        int u = top.second;
        for (auto edge : adj[u])
        {
            int v = edge[0];
            int w = edge[1];

            // modification
            // check for dist[v] < dist[u] +  w
            if (dist[v] < dist[u] + w)
            {
                // update distance of v
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}







