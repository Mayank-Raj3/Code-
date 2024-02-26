#include<bits/stdc++.h>
using namespace std;
int m[100003];

int n , q ;
int bs(int k ) {
	int lo = 0 , hi =  n ;
	while (lo < hi) {
		int mid = (hi + lo) / 2;
		if (m[mid] <= k) {
			lo = mid + 1;
		}
		else hi = mid ;

	}
	return lo;

}

int main() {
	cin >> n;
	for (int i = 0 ; i < n ; ++i) {
		cin >> m[i];
	}
	sort(m, m + n);

	cin >> q;
	while (q--) {
		int k ;
		cin >> k;

		int ans = bs(k);
		cout << ans << endl;
	}


}