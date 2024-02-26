#include<bits/stdc++.h>
using namespace std;
int main() {
	int n , k ;
	cin >> n >> k ;
	int people[n];
	for (int i = 0 ; i < n ; i++) {
		cin >> people[i];
	}

	sort(people, people + n);

	for (int it = 0; it < m; it++) {
		int pos = -1;
		for (int i = 0; i < n; i++) {
			if (pos == -1 || a[i] < a[pos]) {
				pos = i;
			}
		}
		assert(pos != -1);
		a[pos]++;
	}
	int ans1 = *max_element(a, a + n);
	cout << ans1 << ' ' << ans2 << endl;
}


