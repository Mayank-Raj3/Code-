#include<bits/stdc++.h>
using namespace std;
void sieve() {
	long long max = 1000000;

	vector<bool> isprime(max + 1, true);
	for (int i = 2 ; i * i <= max ; i++) {
		if (isprime[i]) {
			for (int j = i * i ; j <= max ; j += i) {
				isprime[j] = false;
			}
		}
	}
	int cnt(0);
	for (int i = 2 ; i <= 100 ; i++ ) {
		if (isprime[i]) cout << i << " ", cnt++;

	}
	cout << '\n' << cnt;
}
int main() {
	sieve();
}