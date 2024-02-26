#include<bits/stdc++.h>

using namespace    std;

int main() {


	char s1[150], s2[150];
	cin >> s1 >> s2;
	int n = strlen(s1);
	for (int i = 0 ; i < ; n i++) {
		s1[i] = tolower(s1[i]);
		s2[i] = tolower(s2[i]);
	}

	int a = strcmp(s1, s2);
	if (a == 0) {
		cout << 0 << endl;
	}

	else if (a > 0) {
		cout << 1 << endl;
	}

	if (a < 0) {
		cout << -1 << endl;
	}



	return 0;



}