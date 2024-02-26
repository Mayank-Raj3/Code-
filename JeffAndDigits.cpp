#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	int n ; cin >> n ;
	int sum = 0 , n5 = 0, n0 = 0;
	while (n--) {
		int x; cin >> x;
		if (x == 0) n0++;
		else n5++;
		sum += x;
	}
	if (n0 == 0) cout << -1;


	else if (n5 < 9 ) {
		cout << 0;
		// return 0;
	}




	else {
		bool m = true;


		while (m) {
			if (sum % 9 != 0 ) {
				sum -= 5;
				n5--;
			}

			if (sum % 9 == 0) break;
		}


		for (int i = 1 ; i <= n5; i++) {
			cout << 5;
		}

		for (int i = 1 ; i <= n0; i++) {
			cout << 0;
		}
	}



}