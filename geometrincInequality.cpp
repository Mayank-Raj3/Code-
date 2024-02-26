#include<bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t;
	while (t--) {
		int n , one = 0 , neg = 0;
		cin >> n;

		for (int i = 0 ; i < n ; i++) {
			int temp ;
			cin >> temp;
			if (temp == 1 ) one++;
			else neg++;
		}

		if (abs(one - neg) < 2) cout << "YES" << endl;
		else if (abs(one - neg) == 2  and one % 2 == 0 and neg % 2 == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}