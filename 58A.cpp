#include<bits/stdc++.h>
using namespace std;

int main() {
	string s ;
	cin >> s;
	set<char> st;
	for (auto it : s) {
		st.insert(it);
	}

	for (auto it : st) {
		cout << it;
	}
}