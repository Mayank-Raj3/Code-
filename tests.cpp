#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void SOLVE() {
	// ll n , k , q , t ;
	// cin >> n >> k >> q;
	// t = n;
	// int a[200002] = {0LL};
	// long pre[200002];

	// int li, ri = 0;

	// while (t--) {
	// 	cin >> li >> ri;
	// 	a[li] += 1;
	// 	if (ri != 200001) {
	// 		a[ri + 1] -= 1;
	// 	}
	// }

	// for (int i = 1; i <= 200001; i++) {
	// 	a[i] = a[i] + a[i - 1];
	// }

	// for (int j = 0; j <= 200001; j++) {
	// 	pre[j] = pre[j - 1] + (a[j] >= k ? 1 : 0);
	// }
	// cout << pre[-1];
	// while (q--) {
	// 	cin >> li >> ri;
	// 	cout << pre[ri] - pre[li - 1] << endl;
	// }
	vector<int> arr(2);
	cout << arr[-1];
}

int main() {
	SOLVE();
	return 0;
}
