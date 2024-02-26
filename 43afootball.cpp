#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	int c1(0), c2(0);
	string arr[t];
	set<string> st;
	for (int i = 0 ; i < t; i++) {
		cin >> arr[i];
		st.insert(arr[i]);
	}
	string win = *st.begin();
	for (auto it : arr) {
		if (win == it) c1++;
		else c2++;
	}
	if (c1 > c2) cout << win;
	else cout << *(st.rbegin());
}