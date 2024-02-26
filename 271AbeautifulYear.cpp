#include<bits/stdc++.h>
using namespace std;
bool isdistinct(int n ) {
	int x = n;
	int m = 0;
	set<int> s;
	while (x != 0) {
		int rem = x % 10;
		s.insert(rem);
		m++;
		x = x / 10;
	}
	if (m == s.size()) {
		return true;
	}
	else return false;
}
int main() {
	int n ;
	cin >> n;
	bool x = true;
	int c = 1;
	while (x) {
		if (isdistinct(n + c)) {
			cout << n + c << endl;
			return 0 ;
		}
		c++;

	}
}