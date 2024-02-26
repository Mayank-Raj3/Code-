#include<bits/stdc++.h>
using namespace std;
int main() {
	string s ; cin >> s;
	int ans(0);
	int count = 0 ;
	for (int i = 0 ; i < s.size(); i++)
	{
		if (s[i] == s[i + 1]) {
			count++;
		}
		else {
			count = 0;
		}
		if (count > ans) {
			ans = count;
		}


	}
	cout << ans + 1;
}