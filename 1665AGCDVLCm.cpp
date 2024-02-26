#include<bits/stdc++.h>
using namespace std;


// since always gcd of (1, and any integer is 1 ) = 1
// and lcm to be one we need lcm of (1,1) = 1

// so any integer will be n-3





int main() {
	int t  , n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << n - 3 << ' ' << 1 << ' ' << 1 << ' ' << 1 << '\n';
	}
}