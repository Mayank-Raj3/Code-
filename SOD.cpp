#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n
		    ;		ll sum = 0 ;
		while (n != 0) {
			int rem = n % 10;
			sum += rem;
			n = n / 10;

		}

		cout << sum << "\n";

	}

}