#include<bits/stdc++.h>
using namespace std;
#define nline "\n";
int main() {
	int t ; cin >> t;
	while (t--) {
		int a , b , c;
		cin >> a >> b >> c;
		if (a * b <= c) {
			cout << "NO" << nline;

		}
		else {
			cout << "YES" << nline;
		}

	}

}