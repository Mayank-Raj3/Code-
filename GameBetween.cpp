#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c, d;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c >> d;

		if (a >= b) {
			b += c;
		}
		else a += c;

		if (a >= b) 			b += d;
		else a += d;

		if (a >= b) cout << "N" << endl;
		else cout << "S" << endl;




	}
}