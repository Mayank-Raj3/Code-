
#include "bits/stdc++.h"
using namespace std;

typedef long long           lol;
typedef pair<int, int>       pii;
#define pb                  push_back
#define ub                  upper_bound
#define lb                  lower_bound
#define fo(i,l,r,d)         for(auto i=(l); (d)<0?i>(r):((d)>0?i<(r):0); i+=(d))
#define all(x)              x.begin(), x.end()
#define ff                  first
#define ss                  second

mt19937 rng (chrono::high_resolution_clock::now().time_since_epoch().count());
template <typename A, typename B> ostream& operator<< (ostream &cout, pair<A, B> const &p) { return cout << "(" << p.first << ", " << p.second << ")"; }
template <typename A, typename B> istream& operator>> (istream& cin, pair<A, B> &p) {cin >> p.first; return cin >> p.second;}
template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << "["; for (int i = 0; i < v.size(); i++) {if (i) cout << ", "; cout << v[i];} return cout << "]";}
template <typename A> istream& operator>> (istream& cin, vector<A> &x) {for (int i = 0; i < x.size() - 1; i++) cin >> x[i]; return cin >> x[x.size() - 1];}
template <typename A, typename B> A amax (A &a, B b) { if (b > a) a = b ; return a; }
template <typename A, typename B> A amin (A &a, B b) { if (b < a) a = b ; return a; }


void darling (const int kase) {

	int64_t n, k; cin >> n >> k;

	vector a(n, pii());
	for (auto &[h, p] : a) cin >> h;
	for (auto &[h, p] : a) cin >> p;

	sort(all(a));

	vector ms(n, 0); ms[n - 1] = a.back().ss;

	fo(i, n - 2, -1, -1)
	ms[i] = min(ms[i + 1], a[i].ss);

	int64_t loss = 0;

	int j = 0;
	while (k > 0 and j < n) {
		auto jj = lb(all(a), pii(k + loss + 1, -1)) - a.begin();
		// cout << jj << ' ' << j << ' ' << k << ' ' << loss << '\n';
		loss += k;
		j = jj;
		if (j == n) break;
		k -= ms[jj];
	}

	if (j == n) cout << "YES\n";
	else cout << "NO\n";
}

int main () {
	ios_base::sync_with_stdio(0), cin.tie(0);


	int T; cin >> T;
	for (int K = 0; K < T; K++)
		darling(K + 1);

}
