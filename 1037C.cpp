#include<bits/stdc++.h>
using namespace std;
int main() {
	int n ; cin >> n;
	string s, t;
	int cnt = 0;
	cin >> s >> t;
	for (int i = 0 ; i < n ; i++) {
		if (s[i] != t[i] && s[i + 1] == t[i]) {
			cnt++;
			char temp = s[i];
			s[i] = s[i + 1];
			s[i + 1] = temp;


		}
		else {
			if (s[i] != t[i]) {
				if (s[i] == 0) s[i] = 1
					                      ;
				else s[i] = 1;
				cnt++;
			}

		}
	}
	cout << cnt;

}