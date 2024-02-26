#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define ld long double
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


void solve() {
	int n ; cin >> n ;	std::vector<int> b(n);

	if (n == 4) {
		cout << 2 << " " << 1 << " " << 3 << " " << 4 << nline;
	} else {
		for (int i = n - 1  ; i >= n - 1   ; i-- )
			b[n - 1] =  n  ;

		b[n - 2] = n - 1, b[n - 3] = 1 ; b[n - 4] = 3 ; b[n - 5] = 2;
		for (int i =  0 ; i < n - 5 ; i++) {
			b[i] = i + 4;
		}



		for (int i = 0 ; i < n ; i++) cout << b[i] << " ";

		cout << nline;

	}

}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
