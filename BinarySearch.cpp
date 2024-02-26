#include<bits/stdc++.h>
using namespace std;
int main() {
	int n , k ; cin >> n >> k ;

	vector<int> arr(n);
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	for (int i = 0 ;  i < k ; i++ ) {
		int x ;
		cin >> x;
		int start = 0;
		int end = n - 1;
		bool ok = false;
		while (start <= end) {
			int mid = (start + end) / 2;
			if (arr[mid] == x) {
				ok = true;
				break;
			}
			else if (arr[mid] < x) {
				start = mid + 1;
			} else {
				end = mid - 1;
			}
		}
		if (ok) {
			cout << "YES\n";
		} else cout << "NO\n";
	}
}