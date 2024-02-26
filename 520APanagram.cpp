#include<bits/stdc++.h>
using namespace std;

int main() {
	int n ;
	string s ;
	cin >> n;
	cin >> s;
	set<char> st;

	for (auto it : s) {

		st.insert(tolower(it));
	}

	if (st.size() == 26) {
		cout << "YES";
	}
	else cout << "NO";

}