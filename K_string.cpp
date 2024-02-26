#include<bits/stdc++.h>
using namespace std;
#define debug(vec) for(auto it: vec) cout<<it<<" ";
int main() {
	int k ;
	string s ;
	cin >> k >> s;
	vector<int> v(26, 0); // creates a vector of size 26 filled with 0;
	for (auto it : s) v[it - 'a']; //couts number of chracter ;
	string res = "";
	for (int i = 0 ; i < 26 ; i++) {
		if (v[i] % k != 0) {
			cout << -1 ; return 0 ;// if k ka multiple nhi ha count char ka tho possible nhi hah k -string
		}
		else {
			int times = v[i]

			            while (times--) res.push_back('a' + i);
		}
	}
	debug


	cout << res;


}

