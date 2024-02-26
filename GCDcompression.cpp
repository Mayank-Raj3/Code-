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
	std::vector<int> even;
	std::vector<int> odd;
	for (int i = 0 ; i < 2 * n; i++) {
		int c ; cin >> c ;
		if (c % 2 == 1) odd.push_back(i + 1);
		else even.push_back(i + 1);
	}
	if (odd.size() % 2 == 1) {
		odd.pop_back();
		even.pop_back();
	}
	else if (even.size() >= 2) {
		even.pop_back();
		even.pop_back();
	}
	else {
		odd.pop_back();
		odd.pop_back();
	}

	for (int i = 0 ; i < odd.size(); i += 2) {
		cout << odd[i] << " " << odd[i + 1] << nline;
	}

	for (int i = 0 ; i < even.size(); i += 2) {
		cout << even[i] << " " << even[i + 1] << nline;
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
