#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nline "\n";


int main() {
	int t;
	cin >> t;
	while (t--) {

		int n ; cin >> n;
		int array[n];

		for (int i = 0; i < n; i++) {
			cin >> array[i];
		}

		map<int, int> frequency;

		for (int i = 0; i < n; i++) {
			frequency[array[i]]++;
		}
		int max(0), val(0) ;
		for (auto it : frequency) {
			if (it.second > max) {
				max = it.second;
				val = it.first;
			}
		}
		int cnt = 0;
		for (auto it : frequency) {
			if (max == it.second) cnt++;
		}

		if (cnt > 1) {cout << "CONFUSED" << nline  ;}
		else cout << val << nline;
	}

}