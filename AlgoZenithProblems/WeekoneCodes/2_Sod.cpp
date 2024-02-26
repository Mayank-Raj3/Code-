#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nline "\n"
void solve() {
	string s ; cin >> s;
	int sum = 0 ;
	for (auto it : s) {
		sum += (it - '0');
	}
	cout << sum << nline;

}
signed main() {
	int t ; cin >> t ; while (t--)
		solve();
}