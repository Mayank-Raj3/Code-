#include<bits/stdc++.h>
using namespace std;

int main() {
	int n , h ;
	cin >> n >> h;
	int sum = 0;
	while (n--) {
		int x;
		cin >> x;
		if (x > h) {
			sum = sum + 2;
		}
		else sum = sum + 1;

	}
	cout << sum << endl;
}