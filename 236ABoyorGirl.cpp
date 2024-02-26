#include<bits/stdc++.h>
using namespace std;

int main() {
	string n ;

	cin >> n ;
	set<char> st;
	for (auto it : n) {
		st.insert(it);
	}

	if ( (st.size() % 2) == 0) {
		cout << "CHAT WITH HER!";
	}
	else cout << "IGNORE HIM!";

}