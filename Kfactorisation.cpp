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
	int n ; cin >> n ; int k ; cin >> k;

	vector<int> arr;

	for (int i = 2 ; i * i <= n; i++) {
		while (n % i == 0) {
			arr.push_back(i);
			n = n / i;
		}
	}
	if (n > 1) {
		arr.push_back(n);
	}

	if (arr.size() >= k) {
		for (int i = 0 ; i < k - 1 ; i++) {
			cout << arr[i] << " ";
		}
		int prod = 1;

		for (int i = k - 1 ; i < arr.size(); i++) {
			prod = prod * arr[i];
		}
		cout << prod;


	}

	else cout << -1;




}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	solve();
}
