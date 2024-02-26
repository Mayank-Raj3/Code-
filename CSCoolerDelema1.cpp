#include<bits/stdc++.h>
using namespace std;
// Rent a cooler at the cost of X coins per month.
// Purchase a cooler for Y coins.
// Given that the summer season will last for M months
int main() {
	int T, X, M, Y;
	cin >> T;
	while (T--) {

		cin >> X >> Y >> M;

		if ((X * M) < Y) {
			cout << "YES" << endl;
		}

		else {
			cout << "NO" << endl;
		}
	}


}