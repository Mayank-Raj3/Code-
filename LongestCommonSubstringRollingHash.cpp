//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

struct rollinghash {
    int n, mod, p;
    vector<int> prefix, pk;

    rollinghash(string s, int _p, int _mod) : mod(_mod), p(_p), n(s.length()) {
        prefix.resize(n);
        pk.resize(n);
        prefix[0] = (s[0] - 'A' + 1);
        pk[0] = 1;

        for (int i = 1; i < n; i++) {
            prefix[i] = (1LL * prefix[i - 1] * p + (s[i] - 'A' + 1)) % mod;
            pk[i] = (1LL * pk[i - 1] * p) % mod;
        }
    }

    int gethash(int l, int r) {
        if (l == 0)
            return prefix[r];
        else {
            int x = (prefix[r] - (1LL * prefix[l - 1] * pk[r - l + 1]) % mod + mod) % mod;
            return x;
        }
    }
};

class Solution {
public:
    int longestCommonSubstr(const string& t1, const string& t2, int n, int m) {

        string uppercase_t1 = t1;
        string uppercase_t2 = t2;
        transform(uppercase_t1.begin(), uppercase_t1.end(), uppercase_t1.begin(), ::toupper);
        transform(uppercase_t2.begin(), uppercase_t2.end(), uppercase_t2.begin(), ::toupper);

        rollinghash r1(uppercase_t1, 31, 999999937);
        rollinghash r2(uppercase_t2, 31, 999999937);

        auto check = [&](int mid) {
            set<int> st;

            for (int i = mid ; i < n; i++) {
                st.insert(r1.gethash(i - mid , i));
            }
            for (int i = mid; i < m; i++) {
                if (st.find(r2.gethash(i - mid , i)) != st.end()) {
                    return true;
                }
            }
            return false;
        };

        int lo = 0, hi = min(n, m), ans = -1;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (check(mid)) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        return ans + 1 ;
    }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends