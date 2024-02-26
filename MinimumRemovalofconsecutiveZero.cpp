//      .....All...copyright....Mynk28nov.........;
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define ld long double
#define nline "\n"

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

#include <bits/stdc++.h>
using namespace std;


int minSteps(string S)
{
//https://www.geeksforgeeks.org/minimum-removal-of-consecutive-similar-characters-required-to-empty-a-binary-string/
	// Stores the modified string
	string new_str;

	// Size of string
	int N = S.length();

	int i = 0;

	while (i < N) {

		new_str += S[i];

		// Removing substring of same
		// character from modified string
		int j = i;
		while (i < N && S[i] == S[j])
			++i;
	}

	// Print the minimum steps required
	return ceil((new_str.size() + 1) / 2.0);
}


void solve() {
	int n, a , b ;
	cin >> n >> a >> b;
	string s ; cin >> s ;

	int ans = 0 ;
	ans += (a * n);
	if (b >= 0) { // agr b bada ha tho maximum add karenge
		ans += (b * n);
	}
	else {
		ans += (b * minSteps(s)); // agr b -ve mea ha tho minimum add karenge
	}
	cout << ans << nline;
	return;






}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
