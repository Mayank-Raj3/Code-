#include<bits/stdc++.h>
using namespace std;
int main() {
	string s ; cin >> s;
	for (auto it : s) {
		if ((it == 'A') or (it == 'a') or (it == 'e') or (it == 'E') or (it == 'i') or (it == 'I') or (it == 'o' ) or (it == 'O') or (it == 'u') or (it == 'U') or (it == 'y') or (it == 'Y'))
			continue;
		else {

			cout << "." << char(tolower(it));
		}


	}

}