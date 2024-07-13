#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        vector<vector<vector<int>>> adj(n);
        for (auto it : edges) {
            adj[it[0]].push_back({it[1], it[2]});
        }

        vector<int> dis(n, 1e9);
        dis[0] = 0;
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        pq.push({0, 0});

        while (!pq.empty()) {
            int dist = pq.top()[0];
            int node = pq.top()[1];
            pq.pop();

            if (dist > dis[node]) continue;

            for (auto it : adj[node]) {
                int v = it[0], w = it[1];
                if (dis[node] + w < dis[v]) {
                    dis[v] = dis[node] + w;
                    pq.push({dis[v], v});
                }
            }
        }

        for (auto &it : dis) {
            if (it == 1e9) {
                it = -1;
            }
        }
        return dis;
    }
};
