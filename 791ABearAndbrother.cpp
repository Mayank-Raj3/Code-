#include<bits/stdc++.h>
using namespace std;

int main() {
	int a , b  ;
	cin >> a >> b;
	bool t = true;
	int count = 0;

	while (t) {
		a = 3 * a;
		b = 2 * b;
		count++;
		if (a > b) {
			t = false ;
		}
	}
	cout << count;
}