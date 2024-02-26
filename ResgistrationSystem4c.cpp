#include<bits/stdc++.h>
using namespace std;
int main() {

	map<string, int> map;
	int n ;
	cin >> n  ;

	for (int i = 0 ; i < n ; i++) {
		string s;
		cin >> s;
		if (map[s] == 0) {
			cout << "OK\n";
		}
		else {
			cout << s << map[s] << "\n";
		}
		map[s]++;
	}


}