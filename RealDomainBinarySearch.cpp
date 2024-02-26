#include<bits/stdc++.h>
using namespace  std;

bool check(int mid) {
	return 1;
}
int main() {
	int n ; cin >> n ;
	long double  lo = 0 , hi = n;
	for (int i = 0 ; i < 60 ; i++) {
		long double mid = (lo + hi) / 2;
		if (check(mid)) {
			hi = mid ;
		} else {
			lo = mid;
		}
	}
	long double ans = (lo + hi) / 2;

}