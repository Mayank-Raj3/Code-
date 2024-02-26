//      .....All...copyright....Mynk28nov.........;
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define ld long double
#define nline "\n"

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void say_hello(int n ) {
	// if want to print
// Hello 1
// Hello 2
// Hello 3
// Hello 4
// Hello 5
// Hello 6
// Hello 7
// Hello 8
// Hello 9
//
	if (n == 0) return;
	say_hello(n - 1); // phle sab call hoga tab n ==1 ho jayega fir return hona start hoga
	cout << "Hello " << n << nline;

}

int sun(int n ) {
	if (n == 0 ) return 0;
	return sun(n - 1) + n;


}

//1234
/*
	return 1 ;
	return 2 ;
	return 3 ;

*/
int sum_digits(int n ) {
	if (n == 0) return 0 ;

	int last = n % 10;
	int rem = n / 10 ;
	return sum_digits(rem) + last;
}



int main() {
	// say_hello(10); // we trust that it will print hello
	// cout << sun(10); // should give 55
	cout << sum_digits(10);


}
