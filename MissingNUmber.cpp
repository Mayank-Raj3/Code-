#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll n ; cin >> n;
	ll sum = (n * (n + 1) ) / 2;
	ll count = 0;
	for (int   i = 0 ; i < n - 1; i++) {
		int x ; cin >> x;
		count = count + x;

	}
	cout << sum - count;


}