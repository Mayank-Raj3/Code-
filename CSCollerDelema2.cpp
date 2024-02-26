#include<bits/stdc++.h>
using namespace std;

int main() {
	int T, X, M, Y;
	cin >> T;
	while (T--) {

		cin >> X >> Y;

		// cout << M*X << endl;

		if ((Y % X) != 0) {
			cout << Y / X << endl;
		}

		else {
			cout << (Y / X) - 1 << endl;
		}
	}


}