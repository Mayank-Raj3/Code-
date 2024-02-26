#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define nline "\n"

void solve() {
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	double ed = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	double manhattan = abs(x1 - x2) + abs(y1 - y2);
	cout << fixed << setprecision(7) << ed << " " << manhattan << "\n";

}
signed main() {
	int t ; cin >> t ; while (t--)
		solve();
}