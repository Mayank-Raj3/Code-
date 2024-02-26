#include<bits/stdc++.h>
using namespace std;
bool isprime(int a ) {
	if (a == 1) {
		return false;
	}

	for (int i = 2 ; i * i <= a ; i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return  true ;

}
int main() {
	int n ;
	cin >> n;
	int cnt = 0;
	for (int i = 1 ; i < 1     ; i++) {
		if (isprime(i)) {
			cout << i << " ";
		}
	}
	cout << cnt;
}