#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n ; cin >> n
		            ;
		int arr[n];
		for (int i = 0 ; i < n ; i++) cin >> arr[i];
		sort(arr, arr + n, greater<int>());
		int req = 0 , avail = 0;
		for (int i = 0 ; i < n ; i++)
			req += arr[0] - arr[i];
		int ans = 0;

		if (req == 0) {
			ans = 0;
		}
		else {
			for (int i = 1 ; i < n ; i++) {
				req -= (n - i) * (arr[i - 1] - arr[i]);
				avail += arr[i - 1];
				if (avail >= req) {
					ans = i;
					break;
				}
			}
		}
		cout << ans << endl;

	}

}