#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second

/*
6 6
S . # . . .
. . # . . .
# . # . # .
. . . . # .
# # # # . .
F . . . . .
*/

int n, m;
vector<vector<char>> arr;
using state = pair<int, int>;

vector<vector<int>> vis;
vector<vector<int>> dis;

bool is_valid(int x, int y) {
    if (x >= 0 && x < n && y >= 0 && y < m && arr[x][y] != '#') {
        return 1;
    }
    return 0;
}

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

vector<state> neigbours(state node) {
    vector<state> neighs;
    for (int k = 0; k < 4; k++) {
        int x = node.F + dx[k];
        int y = node.S + dy[k];
        if (is_valid(x, y)) {
            neighs.push_back({x, y});
        }
    }
    return neighs;
}

void bfs(state st_node) {
    vis.assign(n, vector<int>(m, 0));
    dis.assign(n, vector<int>(m, 1e9));

    queue<state> q;
    vis[st_node.F][st_node.S] = 1;
    dis[st_node.F][st_node.S] = 0;
    q.push(st_node);
    while (!q.empty()) {
        state node = q.front();
        q.pop();
        for (state v : neigbours(node)) {
            if (!vis[v.F][v.S]) {
                vis[v.F][v.S] = 1;
                dis[v.F][v.S] = dis[node.F][node.S] + 1;
                q.push(v);
            }
        }
    }
}

int main() {
    cin >> n >> m;
    arr.resize(n);

    state st, en;

    for (int i = 0; i < n; i++) {
        arr[i].resize(m);
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'S') {
                st = {i, j};
            } else if (arr[i][j] == 'F') {
                en = {i, j};
            }
        }
    }

    bfs(st);
    if (!vis[en.F][en.S]) {
        cout << "Finish is not reachable\n";
    } else {
        cout << dis[en.F][en.S] << endl;
    }
}