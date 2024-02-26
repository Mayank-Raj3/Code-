#include<bits/stdc++.h>
using namespace std;
int hcf(int a , int b ) {
	if (b > a) return (b, a);
	if (b == 0) {
		return a ;
	}

	return (b, a % b);
}
int main() {
	int a, b  ;
	cin >> a >> b;
	int gcd = hcf(a, b);
	cout << "GCD:" << gcd << " LCD:" << a*b / gcd;

}