#include<bits/stdc++.h>

using namespace    std;

int main() {


	string s ;
	cin >> s;
	int n = s.size();
	for (int i = 0 ; i < n ; i = i + 2) {
		for (int j = 0 ; j < n - i - 1 ; j = j + 2) {
			if (s[j] > s[j + 2]) {
				int temp = s[j];
				s[j] = s[j + 2];
				s[j + 2] = temp;
			}


		}
	}

	cout << s;
	return 0;



}
