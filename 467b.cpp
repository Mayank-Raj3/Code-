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
	ll n , m , k ; cin >> n >> m >> k ;

	// n is tha number of solders ;
	// m is tha players

	// m+1 fedor ha

	//agr <=k bits diffre karte ha tho friend banega

	/*
		for elample
	7 3 1
	8
	5
	111
	17


	m is = 3

	3 ka binary = 00011
	tho 17      = 10001

	diffrent bits ha 1+ 1 = 2 aur which is greater than > (k = 1)

	tho ye diffrent bit nikalne k liye

	XOR karke no of one bit count karenge

	3^17

	10010 = 2 one -----
	                   |
	                  \ /
	__builtin_popcount(res) ye function karta




	*/
	int arr[m + 1];
	for (int i = 0 ; i <= m ; i++) {
		cin >> arr[i];
	}

	int cnt = 0 ;
	for (int i = 0 ; i < m ; i++) {
		int res = arr[i] ^ arr[m];
		if (__builtin_popcount(res) <= k) {
			cnt++;
		}

	}
	cout << cnt;


}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 1;

	while (t--) {
		solve();
	}
}
