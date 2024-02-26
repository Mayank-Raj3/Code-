#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define nline "\n";


int main() {
	int t;
	cin >> t;
	while (t--) {
		int n ; cin >> n;
		int arr[n];
		for (int i = 0 ; i < n ; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n);
		if (n == 1) {
			cout << arr[0] << nline;

		}

		else {
			int max(0), cnt(0);
			for (int i  = n - 1 ; i >= 1 ; i--) {
				if (arr[i] == arr[i - 1]) {
					cnt++;
				}
				else {
					if (max < arr[i] + cnt) {
						max = arr[i] + cnt;
					}
					cnt = 0;
				}

			}
			cout << max << nline;
		}

	}

}