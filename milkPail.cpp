#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	freopen("pails.in", "r", stdin);

	int a , b , m ;
	cin >> a >> b >> m ;
	int ans = -1;
	for (int i = 0 ; i <= 1000 ; i++) {
		for (int j = 0 ; j <= 1000 ; j++) {
			if (i * a + b * j <= m) {
				ans = max(ans , i * a + b * j );
				if (i * a + b * j == m) {
					break;
				}
			}
		}

		freopen("pails.out", "w", stdout);
		cout << ans << endl;
	}

}

/* -----------------END OF PROGRAM --------------------*/


