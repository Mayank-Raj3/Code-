#include<bits/stdc++.h>
using namespace std;

int main() {
	int n , x[100], ecount = 0, ocount = 0 ;
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		cin >> x[i];
		if (x[i] % 2 == 0) {
			ecount++;

		}
		else {
			ocount++;
		}
	}

	if (ecount == 1) {
		for (int i = 0 ; i < n ; i++) {
			if (x[i] % 2 == 0) {
				cout << i + 1;
				return 0 ;
			}
		}
	}


	else {
		for (int i = 0 ; i < n ; i++) {
			if (x[i] % 2 != 0) {
				cout << i + 1;
				return 0 ;
			}
		}

	}

}