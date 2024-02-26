#include<bits/stdc++.h>
using namespace std ;
int   n;
long long m ;
const int N = 1e6 + 10;
long long  trees[N];
bool iswood(int mid) {
	long l wood = 0 ;
	for (int i = 0 ; i < n ; i++) {
		if (trees[i] >= mid) {
			wood += (trees[i] - mid);

		}
	}
	return wood >= m;

}

int main() {
	cin >> n >> m;
	for (int i = 0 ; i < n ; i ++) {
		cin >> trees[i];
	}
	long long lo = 0 , hi = 1e9, mid;
	while (hi - lo > 1) {
		mid = (hi + lo) / 2;
		// T T T T [T] F F F F F F
		//		   ans
		if (iswood(mid)) {
			lo = mid;

		}
		else {
			hi = mid - 1 ;

		}



	}
	if (iswood(hi)) {
		cout << hi << endl;
	}
	else if (iswood(lo)) cout << lo << endl;

	else cout << -1 << endl;



}