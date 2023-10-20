//state : - dp[i][j] gives the lcs of a[0..n] and b[0....m]

// transition:-

//  /   \  =

//rec(i, j + 1)
//rec(i + 1, j )
//rec(i + 1 , j + 1)

class Solution {
public:
    int dp[1021][1002];
    string a , b ;
    int rec(int i , int j ) {
        if (i >= a.size() or j >= b.size() ) return  0 ;
        if (dp[i][j] != -1) return dp[i][j];
        int ans = 0;
        ans  = max(ans , rec(i, j + 1));
        ans  = max(ans , rec(i + 1, j ));
        if (a[i] == b[j])
            ans =   max(ans , 1 + rec(i + 1, j + 1));
        return dp[i][j] = ans ;
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp, -1, sizeof(dp));
        a = text1, b = text2;
        return rec(0, 0)  ;

    }
};