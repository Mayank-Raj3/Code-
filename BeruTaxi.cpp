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
double dist(double x , double  y , double  a , double  b ) {
	return sqrt((x - a) * (x - a) + (y - b) * (y - b));
}
void solve() {
	double a , b ; cin >> a >> b ;
	int n ; cin >> n ;
	double  x , y, v ;
	double ans = INT_MAX ;
	while (n--) {
		cin >> x >> y >> v ;
		ans = min(ans , dist(x, y, a, b) / v );
	}
	cout << fixed << setprecision(7) << ans  << nline;


}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 1;

	while (t--) {
		solve();
	}
}
