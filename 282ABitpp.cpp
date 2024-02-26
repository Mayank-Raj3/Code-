#include<bits/stdc++.h>
using namespace std;

int main() {
	int n , x = 0 ;
	cin >> n;
	while (n--) {
		string m;
		cin >> m;
		if (m == "X++" or m == "++X") {
			x++;
		}
		else x--;
	}
	cout << x;
}