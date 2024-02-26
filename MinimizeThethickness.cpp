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
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int sum = 0;
	for (auto x : v) {
		sum += x;
	}
	int temp = 0, mini = n, count = 0;
	for (int i = 0; i < n; i++) {
		temp += v[i];
		count++;
		int temp_maxo = 0;
		if (sum % temp == 0) {
			temp_maxo = count;
			int temp_sum = 0, temp_count = 0;
			for (int j = i + 1; j < n; j++) {
				temp_sum += v[j];
				temp_count++;
				if (temp_sum == temp) {
					temp_maxo = max(temp_maxo, temp_count);
					temp_sum = 0;
					temp_count = 0;
				}
			}
			if (temp_sum == 0) {
				mini = min(mini, temp_maxo);
			}
		}
	}
	cout << mini << endl;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
