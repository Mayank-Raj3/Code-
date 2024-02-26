// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// #define ld long double
// #define nline "\n"


// void solve() {
// 	int n , m ; cin >> n >> m ;
// 	vector<string> arr;
// 	string temp = "";
// 	for (int i = 0 ; i < m ; i++) {
// 		temp += '*';
// 		temp += '.';
// 		temp += '.';
// 	}
// 	temp += '*';
// 	string rowfirst(temp.size(), '*');
// 	cout << rowfirst << nline;
// 	for (int i = 0 ; i < n ; i++) {
// 		cout << temp << nline;
// 		cout << temp << nline;
// 		cout << rowfirst << nline;

// 	}

// }
// signed main() {
// 	int t ; cin >> t ; while (t--)
// 		solve();
// }

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define ff first
#define ss second
#define nline "\n"

void solve() {
	map<int, int> mpp;
	int  n ; cin >> n ;
	for (int i = 0 ; i < n ; i ++) {
		int x ; cin >> x ;
		mpp[x]++;
	}
	map<int, int> mpp1;
	for (int i = 0 ; i < n - 1 ; i ++) {
		int x ; cin >> x ;
		mpp1[x]++;
	}
	map<int, int> mpp2;
	for (int i = 0 ; i < n - 1 ; i ++) {
		int x ; cin >> x ;
		mpp2[x]++;
	}
	int a = -1 , b = - 1 ;
	for (auto it : mpp) {
		if (mpp[it.ff] == mpp1[it.ff]) {
			continue;
		} else {
			a = it.ff;
			break;
		}
	}

	for (auto it : mpp1) {
		if (mpp1[it.ff] == mpp2[it.ff]) {
			continue;
		} else {
			b = it.ff;
			break;
		}
	}
	cout << a

}
signed main() {
	int t ; cin >> t ; while (t--)
		solve();
}