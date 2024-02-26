#include<bits/stdc++.h>
using namespace std;

int main() {
	string s , t ;
	cin >> s >> t;
	reverse(s.begin(), s.end());
	for (int i = 0 ; i < s.size(); i++) {
		if (s[i] != t[i]) {
			cout << "NO";
			return 0 ;
		}


	}
	cout << "YES";



}