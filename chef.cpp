#include<bits/stdc++.h>
using namespace std;
int n , m , x;

bool pos(int rr) {
	int total = n * x;
	int mini = (x + 1) * rr;
	if (x + 1 > m) return false;
	if (total - mini < 0) return false;
	int rem = (total - mini);
	int y = n - rr;
	if ((rem / y <= m) and (rem / y + (rem % y != 0) <= m)) {return true;}
	return false;

}

int main() {
	int t;
	cin >> t;
	while (t--) {

		cin >> n >> m >> x;
		int l = 0 , h = n;
		int ans = 0;
		while (l <= h) {
			int m = (l + h) / 2;
			if (pos( m)) {
				ans = max(ans, m);
				l = m + 1;
			}
			else h = m - 1;
		}
		cout << ans << endl;

	}

}