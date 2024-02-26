#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;

	int len = s.size();

	int j = 1 ;

	for (int i = 0; i < len; i++) {
		if (s[0] == '9' && j == 1) {
			j++;
			continue;

		}


		int a = s[i] - '0';

		if (a < 5 || a == 0) {
			continue;
		} else {
			s[i] = ((9 - a) + '0');
		}
	}

	cout << s;

	return 0;
}