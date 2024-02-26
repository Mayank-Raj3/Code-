#include<bits/stdc++.h>
using namespace std;
void generate(string &s , string curr , int i = 0 ) {
	if (i == s.size()) {
		cout << curr << " ";
		return ;
	}
	generate(s, curr, i + 1);
	// cout << i  << curr << "\n";
	generate(s, curr + s[i], i + 1);

}

void printsub(string &s) {
	int n = s.size();
	for (int i = 0  ; i < (pow(2, n) ) ; i++) {
		string sum = "";
		for (int j = 0 ; j < n ; j++) {
			if ( i & (1 << j) ) {
				sum += s[j];
			}
		}
		cout << sum << " ";

	}
}

int main() {
	string s ; cin >> s;
	// generate(s, " ", 0);
	printsub(s);

}