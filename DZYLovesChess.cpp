#include<bits/stdc++.h>
using namespace std;
// x & 1 produces a value that is either 1 or 0, depending on the least significant bit of x: if the last bit is 1, the result of x & 1 is 1; otherwise, it is 0. This is a bitwise AND operation.

// x >>= 1 means "set x to itself shifted by one bit to the right". The expression evaluates to the new value of x after the shift.
int n, m;
string S;
int main() {
	cin >> n >> m ;
	for (int i = 0; i < n; i++) {
		cin >> S;
		for (int j = 0; j < m; j++)
			if (S[j] == '.') {
				if ((i + j) & 1)	S[j] = 'W';
				else	S[j] = 'B';
			}
		cout << S << "\n";
	}
}