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
	int n , a ; cin >> n >> a;
	int i = a , j = a;
	int arr[n + 1];
	for (int i = 1 ; i <= n ; i++) {
		cin >> arr[i];
	}
	if (n == 1 && arr[1] == 1) {
		cout << 1;
		return;

	}
	int count = 0 ;

	for (int i = 1; i <= n; ++i)

		if (arr[i]) {
			int distance = i - a;
			int j = a - distance;
			if (j < 1 || j > n || arr[i] == arr[j])
				++count;
		}

	cout << count;

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 1;

	while (t--) {
		solve();
	}
}
