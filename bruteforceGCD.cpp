#include<bits/stdc++.h>
using namespace std;

int main() {
	int a , b;
	cin >> a >> b;
	int n = min(a, b);
	int cur_gcd = 1;
	for (int i = 1 ; i <= n ; i++) {
		if (a % i == 0 and b % i == 0) {
			cur_gcd = i;
		}



	}
	cout << "GCD:" << cur_gcd << " LCM:" << (a * b) / cur_gcd ;
}