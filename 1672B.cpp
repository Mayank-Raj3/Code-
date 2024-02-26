#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		set<char> st;
		for (auto it : s)
			st.insert(it);

		if (s.back() == 'B') {
			if (st.size() == 2 && (*st.begin()) == 'A') {
				cout << "YES\n";
			}
			else cout << "NO\n";
		}
		else cout << "NO\n";




	}

}