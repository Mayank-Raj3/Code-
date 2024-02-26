#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int hrs = 0;
	hrs = a;
	while (a >= b) {

		hrs = hrs + (a / b);

		a = (a / b ) + (a % b); //+ remaining like in case 123%5 = 3  then remaining
		// a/b =123/5 = 24 % 5 = 4;

		// so  we were not including 7 candels ;

	}
	cout << hrs;
}