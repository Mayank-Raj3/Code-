#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define nline "\n"
#define ps(x, y) fixed << setprecision(y) << x
#define all(var) var.begin(), var.end()
#define pb push_back
void solve() {
	int n ; cin >> n ;
	vector<int> arr(n);
	for (int i = 0 ; i < n ; i++) cin >> arr[i];
	int maxLength = 0;
	int currr = 2;
	for (int i = 2; i < n; i++) {
		if (arr[i] - arr[i - 1] == arr[i - 1] - arr[i - 2]) {
			currr++;
		} else {
			maxLength = max(maxLength, currr);
			currr = 2;
		}
	}

	maxLength = max(maxLength, currr);
	cout << maxLength << nline;

}
signed main() {
	int t ; cin >> t ; while (t--)
		solve();
}