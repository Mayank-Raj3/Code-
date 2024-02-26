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
	string m , n ; int x ,  y ;
	cin >> m >> x >> n >> y ;
	int s1 = m.size() + x;
	int s2 = n.size() + y;
	if (s1 > s2)
		cout << ">" << nline;
	else if (s1 < s2)
		cout << "<" << nline;
	else { //both the lengths are smae ;
		while (n.size() < m.size()) // zero add karke m aur n ka length same kar rhe
			n += '0';

		while (n.size() > m.size())
			m += '0';

		// cout << m << " " << n << nline;
		if (m > n)

			cout << ">" << endl;

		else if (m < n)

			cout << "<" << endl;

		else

			cout << "=" << endl;



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
