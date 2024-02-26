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
	int n ; cin >> n ;
	int arr[n];
	for (int i = 0 ; i < n ; i++)
		cin >> arr[i];
	if (arr[0] == 1  ) {

		cout << "YES" << nline;
		return;
	}
	else
	{
		cout << "NO" << nline;
		return ;
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



