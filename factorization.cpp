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


vector<ll>  primefactors(ll n ) {
	vector<ll> factors;
	map<int , int > mp;
	vector<long long> factorization;
	for (long long d = 2; d * d <= n; d++) {
		while (n % d == 0) {
			factorization.push_back(d);
			n /= d;
		}
	}
	if (n > 1)
		factorization.push_back(n);

	for (int i = 0 ; i < factorization.size(); i++ ) {
		mp[factorization[i]]++;
	}
	// for (auto it : factorization) {
	// 	cout << it << " ";
	// }
	for (auto it : mp) {
		cout << it.first << "^" << it.second << " " ;
	}
	cout << nline;
}


vector<ll>  findfactors(ll n ) {
	vector<ll> factors;
	for (ll d = 1 ; d * d <= n ; d++) {
		if (n % d == 0) {
			factors.push_back(d); //endters first half
			if ( d != n / d) {
				factors.push_back(n / d); // check if
			}

		}
	}
	// sort(factors.begin(), factors.end());
	for (auto it : factors) {
		cout << it << " ";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ll n;
	while (cin >> n && n != 0)
	{
		primefactors(n);
	}

}
