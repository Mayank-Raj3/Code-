#include<bits/stdc++.h>
using namespace std;
int  main() {
	int t;
	cin >> t;
	while (t--) {
		int n , k ;
		cin >> n >> k ;
		if (n == 1) {
			cout << 1 << endl;
			return 0;
		}

		else if (n == k) {
			cout << k << endl;
			return 0 ;
		}

		else if (n < k ) {
			int a = n / k;
			int b = n % k;
			if (b != 0) a++;
			cout << a << "\n";
		}
		else {
			int c = n / k;
			int d = n % k;
			if (d != 0) c++;
			k *= c;
			int a = k / n;
			int b = k % n;
			if (b != 0) a++;
			cout << a << "\n";

		}
	}
}