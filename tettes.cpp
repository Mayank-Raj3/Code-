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
	ll n, m;
	cin >> n >> m;
	std::vector<ll>  a(n);
	std::vector<ll> b(m);
	for (ll i = 0 ; i < n ; i++) {
		cin >> a[i];
	}
	for (ll i = 0 ; i < m ; i++) {

		cin >> b[i];
	}
	ll i = 0;
	ll j = 0;
	ll cnt = 0;
	while (i < n and j < m) {
		if (a[i] == b[j]) {
			int target = a[i], cnt1 = 0, cnt2 = 0;
			while (i < n && a[i] == target) {
				cnt1++;
				i++;
			}
			while (j < m && b[j] == target) {
				cnt2++;
				j++;
			}
			cnt += (cnt1 * cnt2);
		} else if (a[i] > b[j]) {
			j++;
		} else {
			i++;
		}
	}
	cout << cnt << endl;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	//cin>>t;
	t = 1;
	while (t--) {
		solve();
	}

}