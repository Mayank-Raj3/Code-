#include <bits/stdc++.h>
using namespace std;
int n, m;
string a, b;
int dp[1001][1001];
int rec(int i, int j)
{
    // Base case
    if (i >= n || j >= m)
    {
        return 0;
    }
    // Cache check
    if (dp[i][j] != -1) {
        return dp[i][j];
    }
    // Compute
    int ans = 0;
    //ans = max(ans, rec(i + 1, j)); // Advance in string 'a'
    //ans = max(ans, rec(i, j + 1)); // Advance in string 'b'
    if (a[i] == b[j])
    {
        ans =  1 + rec(i + 1, j + 1);
    } else {
        ans = 0 ;
    }
    // Return
    return dp[i][j] = ans;
}
void solve()
{
    cin >> a >> b;
    n = a.size();
    m = b.size();
    memset(dp, -1, sizeof(dp));
    cout << rec(0, 0) << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}









