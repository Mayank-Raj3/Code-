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
	int n ; cin >> n ;
	std::vector<int> arr(n + 1);

	for (int i = 0 ; i < n ; i++) {
		int x ;  cin >> x ;
		arr[x] = i;
	}
	arr[0] = 0;
	int cnt = 1;
	for (int i = 1 ; i < n + 1 ; i++) {
		if (arr[i] < arr[i - 1]) cnt++;
	}
	cout << cnt;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 1;
	while (t--) {
		solve();
	}
}
