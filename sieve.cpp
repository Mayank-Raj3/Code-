#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
void sieve(ll n ) {
	bool arr[n + 1];
	for (ll i = 0 ; i <= n ; i++) {
		arr[i] = true;
	}
	arr[0] = arr[1] = false;
	for (ll i = 2; i * i <= n; i++) {
		if (arr[i] == true) { //multiples isliye
			for (ll j = i * i; j <= n ; j += i) {
				arr[j] = false;
			}
		}
	}
	ll cnt = 0;
	for (ll i = 2 ; i < n ; i++) {
		if (arr[i]) {
			cout << i << " ";
		}
	}
	cout << cnt;
}
int  main() {
	ll n ;
	cin >> n;
	sieve(n);


}