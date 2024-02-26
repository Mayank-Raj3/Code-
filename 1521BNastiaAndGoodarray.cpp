//      .....All...copyright....Mynk28nov.........;1
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
	int n ; cin >> n ;
	int arr[n];
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}

	if (n == 1) {
		cout << 0 << "\n";
		return;
	}

	if (n % 2 == 0) {
		cout << n / 2 << nline;
	}


	// isme ham minimum element ko larget prime se swap karte ha , kyuki firs gcd ( min , 1e9+1) =1 ;
	else {
		cout << (n / 2) + 1 << nline; //cout no of swap ka
	}
	for (int i = 0 ; i < n ; i += 2) {
		if (i == n - 1) {
			//agr last element ha tho ky ahoga
			cout << i << " " << i + 1 << " " << min(arr[i], arr[i - 1]) << " " << 1000000007 << nline;


		}
		else {
			// index swaped , index 2                    kisse        kisoko    swap kiya
			cout << i + 1 << " " << i + 2 << " " << 1000000007 << " " << min(arr[i], arr[i + 1]) << nline;
			arr[i + 1] = min(arr[i], arr[i + 1]);
			arr[i] = 1000000007;


		}
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
