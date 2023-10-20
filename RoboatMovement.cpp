#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define nline "\n"
#define ps(x, y) fixed << setprecision(y) << x
#define all(var) var.begin(), var.end()
#define pb push_back
void solve() {
    int n , r , c , x , y ; cin >> n >> r >> c >> x >> y;
    string s ; cin >> s ;
    set<pair<int, int>> st ;
    st.insert({x, y});
    for (auto it : s) {
        if (it == 'W') {
            while (st.count({x, y})) {
                y--;
            }
            st.insert({x, y});

        } else if (it == 'E') {
            while (st.count({x, y})) {
                y++;
            }
            st.insert({x, y});

        }
        else if (it == 'S') {
            while (st.count({x, y})) {
                x++;
            }
            st.insert({x, y});

        } else {
            while (st.count({x, y})) {
                x--;
            }
            st.insert({x, y});

        }
        // cout << x << " " << y << nline;
    }
    cout << x << " " << y << nline;
}
signed main() {
    int t ; cin >> t ; while (t--)
        solve();
}