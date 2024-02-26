#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x ;
	cin >> t;
	while (t--) {
		cin >> n >> x;
		if (n % 2 == 1) {
			cout << x << " ";
		}
		for (int i = 1 ; i <= n / 2 ; i++) {
			cout << x - i << " " << x + i << " ";
		}
		cout << endl;
	}
}