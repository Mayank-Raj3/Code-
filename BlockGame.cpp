#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("blocks.in", "r", stdin);
	freopen("blocks.out", "w", stdout);
	vector<int> arr(26);
	int n ; cin >> n ;
	for (int i = 0 ; i < n ; i++) {
		int amounta [26] = { };
		int amountb [26] = { };
		string a , b ;
		cin >> a >> b;
		for (int j = 0; j < a.length(); j++) {
			amounta[a.at(j) - 97]++;
		}
		for (int j = 0; j < b.length(); j++) {
			amountb[b.at(j) - 97]++;
		}
		for (int j = 0; j < 26; j++) {
			arr[j] += max(amounta[j], amountb[j]);
		}
	}
	for (auto it  : arr) {
		cout << it << endl ;
	}
}