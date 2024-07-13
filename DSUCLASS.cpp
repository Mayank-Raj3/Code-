// HeadHunterr
class DSU { //adds no on node
public:

    vector<int> parent;
    vector<int> rank;
    int n , set_size ;

    DSU(int nod) {
// overall complexity after path , rank compression --> Inverse akerman(n) -->almost O(1)
        parent.resize(nod);
        rank.resize(nod);
        n = nod ;
        set_size = nod ;
        for (int i = 0; i < nod; ++i) {
            parent[i] = i;
            rank[i] = 1;
        }
    }

    int find(int u) {
        if (u == parent[u])
            return u;
        else
            return parent[u] = find(parent[u]); //path compression
    }

    void merge(int u, int v) {
        u = find(u) , v = find(v);
        if (u == v) return;

        if (rank[u] > rank[v]) { // jo chota ha vo bade me merge hoga
            parent[v] = u;
            rank[u] += rank[v];
        } else {
            parent[u] = v;
            rank[v] += rank[u]; // rank compression
        }
        set_size -= 1;
    }
    void reset() {
        set_size = n  ;
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
            rank[i] = 1;
        }
    }

    void print() {
        for (int i = 0; i < n; ++i) {
            cout << parent[i] << endl;
        }
    }
};
