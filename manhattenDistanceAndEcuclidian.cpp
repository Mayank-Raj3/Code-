#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define nline "\n"
#define ps(x, y)                      fixed << setprecision(y) << x

ld distanceCalculate(ld x1, ld y1, ld x2, ld y2)
{
	ld x = x1 - x2;
	ld y = y1 - y2;
	ld dist;
	dist = powl(x, 2) + powl(y, 2);       //calculating Euclidean distance
	dist = sqrtl(dist);
	return dist;
}
void solve() {
	ld a , b , c , d ; cin >> a >> b >> c >> d;
	ld x =  c - a;
	ld y = d - b;
	ld ans1 = distanceCalculate(a, b, c, d);

	ld manHatan = abs(x) + abs(y);
	cout << ps(ans1, 7) << " " << ps(manHatan, 7) << nline;

}
signed main() {
	int t ; cin >> t ; while (t--)
		solve();
}