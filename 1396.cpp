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
/*
  2          3         7  _  _     _
 2*6        6*3                   last element ka special case
 									agl se bnayenge taki teen steep mea ho
  10         15 35
 e(n-1)
 2(6-1) add karna hoga
ko add
karna


1st operation : print -- selected indexes

2nd operation :print -- number to be added to make multiple of len = (a[i]*n-1)
  aur element ho jayega element ka multiple = a[i]*n



  aeesa teen step  == 6 operations mea karna ha ;

  1 step k andr 2 uper vale operation 1- n-1;

  2 nd step last ko 4 -4

  3rd step   sab element bangye multiple mean thop bas print karna uska - karke

*/
void solve() {
	ll n ; cin >> n ;
	ll a[n];
	for (ll i = 0 ; i < n ; i++) cin >> a[i];
	if (n == 1) {
		//for length ==1 ;
		cout << 1 << " " << 1 << nline << -a[0] << nline;

		cout << 1 << " " << 1 << nline << 0 << nline;
		cout << 1 << " " << 1 << nline << 0 << nline;
		return ;

	}

	else {

		cout << 1 << " " << n - 1 << nline;
		for (ll i = 0 ; i < n - 1 ; i++) {
			cout << a[i]*(n - 1) << " ";
			a[i] = a[i] * (n );
		}
		cout << nline;
		//selecting last index;
		// made last index multiple of n ;
		cout << n << " " << n << nline;

		cout << a[n - 1]*(n - 1) << "\n";
		a[n - 1] = a[n - 1] * n;

		// made array multiple of n ;

		// ading multiple of - n by selecting array from 1 to n ;

		cout << 1 << " " << n << nline;

		for (ll  i = 0 ; i < n ; i++) {
			cout << -a[i] << " ";
			a[i] = 0;
		}






	}

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	solve();
}

