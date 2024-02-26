#include<bits/stdc++.h>
using namespace std;
bool plain (string &s, int start , int end ) {
	if (start >= end) {
		return true ;
	} else {
		if (s[start] == s[end]) {
			plain(s, start + 1 , end - 1 );
		}
		else {
			return false;
		}
	}

}
int main() {
	string s ; cin >> s ;
	int start = 0 , end = s.size() - 1;
	cout << plain(s, start , end );

}