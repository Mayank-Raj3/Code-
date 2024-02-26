#include<bits/stdc++.h>
using namespace std;
bool isprime(int n ) {
	if (n == 1) return false;
	if (n == 2 || n == 3) return true;

	if (n % 2 == 0 || n % 3 == 0) return false;

	for (int i = 5 ; i * i <= n ; i += 6) {
		if (n % i == 0 or n % (i + 2) == 0 ) return false;
	}

	return true ;
}



int main() {
	int n ;
	cin >> n;
	if (isprime(n)) cout << "Prime";
	else cout << "Not prime";
}