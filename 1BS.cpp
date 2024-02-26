#include<bits/stdc++.h>
using namespace std;
int main() {
	int n , k ; // size and the element that needs to be searched

	cin >> n >> k ;
	vector<int> arr(n);
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < k ; i++) {
		int x;
		cin >> x;
		int l = 0 ;
		int r = n - 1;
		bool ok = false;

		while (l <= r) {
			int m = (l + r) / 2;
			if (arr[m] == x) {
				ok = true ;
				break;
			}

			else if (arr[m] > x) {
				r = m - 1;
			}
			else l = m + 1;
		}
		if (ok) cout << "YES\n" ;
		else cout << "NO\n";
	}

}