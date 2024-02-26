#include<bits/stdc++.h>
using namespace std;
int main() {
	int n , k ; cin >> n >> k ;

	vector<int> a(n);
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}
	for (int i = 0 ;  i < k ; i++ ) {
		int x ;
		cin >> x;
		int l = 0, r = n - 1, mid;
		while (l <= r) {
			mid = l + (r - l) / 2;
			if (a[mid] == x)
			{
				return 1;
			}

			if (a[mid] < x)
			{
				l = mid + 1;
			}
			else r = mid - 1;

		}
		return 0;

	}
}