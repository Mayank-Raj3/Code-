#include<bits/stdc++.h>
using namespace std;
int fibo(int n) {
	if (n <= 1) return n;
	int a = 0, b = 1, c, sum (1);
	for (int i = 2 ; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
		sum += c;

	}
	return sum;

}
int main() {
	int n ; cin >> n;
	cout << fibo(n);
	// for (int i = 0 ; i <= n ; i++) {

	// 	sum += fibo(i);
	// }
	// cout << fibo((n + 2)) - 1;// since sum oof n fibo num= fibo(n+2)-1;
}