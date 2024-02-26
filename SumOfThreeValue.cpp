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
	ll n , x ; cin >> n >> x;
	vector<pair<ll, int>> arr(n);
	ll sum = 0, sum2 = 0;
	for (int i = 0; i < n ; i++) {
		cin >> arr[i].first;
		arr[i].second = i + 1;

	}
	sort(arr.begin(), arr.end());
	// for (auto it : arr) {
	// 	cout << it.first << " " << it.second << endl;
	// }
	for (int i = 0 ; i < n ; i++) {
		sum2 = x - arr[i].first;
		for (int j = i + 1 , k = n - 1; j < k ; j++)
			while (arr[j].first + arr[k].first > sum2) {
				k--
				;
				if (j < k && arr[j].first + arr[k].first == x2) {
					cout << arr[i].second << " " << arr[j].second << " " << arr[k].second;
					return;
				}


			}
	}
	cout << "IMPOSSIBLE";

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 1;

	while (t--) {
		solve();
	}
}
