#include<bits/stdc++.h>
using namespace std;
int main() {
	int n , k ;
	cin >> n >> k;
	if (k == 1 ) {
		if (n  & 1  == 1) {
			cout << "YES";
			return 0;
		}

	}
	if (((n >> k) & 1 ) == 1) {
		cout << "YES";

	}
	else {
		cout << "NO";
	}


}
