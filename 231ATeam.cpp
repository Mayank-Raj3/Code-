#include<bits/stdc++.h>
using namespace std;

int main() {
	int n , count = 0  ;
	int x1 , x2 , x3;
	cin >> n;
	while (n--) {
		cin >> x1 >> x2 >> x3;
		if ((x1 + x2 + x3) >= 2) {
			count++;
		}

	}
	cout << count;
}