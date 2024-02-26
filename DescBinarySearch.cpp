#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	std::vector<int> v(n);
	int x ; cin >> x;
	for (int i = 0 ; i < n; i++) {
		cin >> v[i];
	}
	int start = 0 ; int  end =   n - 1 ;
	int res = -1;
	while (start <= end ) {
		int mid = (start + end ) / 2;
		if (v[mid] == x) {
			res = mid ;
			start = mid + 1 ;	// end = mi			end = mid  - 1 ;

		}

		else start = mid + 1;
	}
	cout << res;


}
