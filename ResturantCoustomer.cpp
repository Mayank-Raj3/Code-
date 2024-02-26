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
	vector<pair<int, int>> arr;
	int n ; cin >> n ;
	for (int i = 0 ; i < n ; i++) {
		int a, b; cin >> a >> b ;
		arr.push_back({a, 1});
		arr.push_back({b, -1});
	}

	sort(arr.begin(), arr.end());;
	int cur = 0 , maxi = 0 ;
	for (int i = 0 ; i < arr.size() ; i++) {
		cur += arr[i].second;
		maxi = max(cur, maxi);
	}
	cout << maxi;


}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 1;

	while (t--) {
		solve();
	}
}
