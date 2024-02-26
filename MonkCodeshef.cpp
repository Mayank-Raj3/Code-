#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int  n ; cin >> n ;
		int monkm[n];
		int tot(0);
		for (int i = 0 ; i < n ; i++) {
			cin >> monkm[i];
			tot += monkm[i];
		}
		sort(monkm, monkm + n, greater<int>());

		int monk(0);
		int req(0), avail(0);
		for (int i = 0 ; i < n; i++) {
			req = monkm[i] * (n - 1) - (tot);
			if (req < avail) break;

			else {
				monk++;
				tot = tot - monkm[i];
				avail = monkm[i];


			}


		}
		cout << monk << endl;
	}

}