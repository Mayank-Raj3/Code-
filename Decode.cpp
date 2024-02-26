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

void solve() {
	int n ; cin >> n;
	string s ; cin >> s ;
	char ch[] = {'a' , 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int  i = n - 1 ;
	string ans = "";
	while (i >= 0) {
		if (s[i] == '0') {
			string temp = "";
			temp =  temp + s[i - 2] + s[i - 1] ;
			int x = stoi(temp);
			ans = ans + ch[x - 1];
			i = i - 3;
		}
		else {
			int x = s[i] - '0' - 1;

			ans = ans + ch[x];
			i--;
		}
	}

	reverse(ans.begin(), ans.end());
	cout << ans << nline;

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}


// if ( s[i] != '0') agr char 0 nhi ha
// 	ans += (s[i] - '0' - 1 + 'a'); // -'0' number mea convert karke

// else
// {
// 	string num;
// 	num += s[i - 2];
// 	num += s[i - 1];
// 	int x = stoi(num); //stoi = string ko number mea convert karta hu ;
// 	i = i - 2;
// 	ans += ('a' + x - 1);

