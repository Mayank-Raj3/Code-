
#include<bits/stdc++.h>
using namespace std;

struct rollinghash
{
	int n, mod, p;
	vector<int> prefix, pk;
	map<int, int>id;
	int cnt = 1;
	rollinghash(string s, int _p, int _mod)
	{
		mod = _mod;
		p = _p;
		n = s.length();
		prefix.resize(n);
		pk.resize(n);
		for (char c = 'a'; c <= 'z'; c++)
			id[c] = cnt++;

		for (char c = 'A'; c <= 'Z'; c++)
			id[c] = cnt++;

		prefix[0] = id[s[0]];
		pk[0] = 1;

		for (int i = 1; i < n; i++)
		{
			prefix[i] = (1LL * prefix[i - 1] * p + id[s[i]]) % mod;
			pk[i] = (1LL * pk[i - 1] * p) % mod;
		}
	}

	int gethash(int l, int r)
	{
		if (l == 0)
			return prefix[r];
		else
		{
			int x = (prefix[r] - (1LL * prefix[l - 1] * pk[r - l + 1]) % mod + mod) % mod;
			return x;
		}
	}
};

class Solution {
public:

	int longestCommonSubstr (string S1, string S2, int n, int m)
	{
		// your code here

		rollinghash r1(S1, 31, 999999937);
		rollinghash r2(S2, 31, 999999937);

		auto check = [&](int mid) {
			set<int> st;

			for (int i = mid; i < n; i++) {
				st.insert(r1.gethash(i - mid, i ));
			}
			for (int i = mid; i < m; i++) {
				if (st.find(r2.gethash(i - mid, i )) != st.end()) {
					return true;
				}
			}

			return false;
		};

		int lo = 0, hi = max(n, m), ans = -1;
		while (lo <= hi) {
			int mid = (lo + hi) / 2;
			if (check(mid)) {
				ans = mid;
				lo = mid + 1;
			} else {
				hi = mid - 1;
			}
		}
		if (ans == -1 )return 0 ;
		else
			return ans + 1;
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
