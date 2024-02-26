//      .....All...copyright....Mynk28nov.........;
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define ld long double
#define nline "\n"

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
	string s; cin >> s ;
	ll n = s.size();
	map<char, vector<ll>> mp;
	for (ll i = 0 ; i < n ; i++) {
		mp[s[i]].push_back(i + 1);
	}

	// sare element k index dal rhe vector mea

	if (s[0] >= s[n - 1]) {
		vector<ll> v;
		for (char ch = s[0]; ch >= s[n - 1]; ch--)
			for (auto it : mp[ch])
				v.push_back(it);
		cout << abs(s[n - 1] - s[0]) << " " << v.size() << nline;
		for (auto it : v) {
			cout << it << " ";
		}
		cout << endl;
	}

	else {
		vector<ll>vec;
		for (char ch = s[0]; ch <= s[n - 1]; ch++) {
			for (auto it : mp[ch]) {
				vec.push_back(it);
			}
		}
		cout << abs(s[n - 1] - s[0]) << " " << vec.size() << endl;
		for (auto it : vec) {
			cout << it << " ";
		}
		cout << endl;
	}






}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
