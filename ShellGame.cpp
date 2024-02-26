
#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("shell.in", "r", stdin);

	int n ; cin >> n ;
	int ans = 0 ;
	vector<vector<int>> temp(n);
	for (int i = 0 ; i <  n ; i ++) {
		int l , r , g ; cin >> l >> r >> g;
		temp[i] = {l, r, g};
	}

	for (int i = 1 ; i <= 3 ; i++) {
		vector<int> arr(4, 0);
		arr[i] = 1;
		int gueses = 0 ;
		for (int j = 0 ; j < n ; j++ ) {
			int l = temp[j][0], r = temp[j][1], g = temp[j][2];
			swap(arr[l], arr[r]);
			if (arr[g] == 1) {
				gueses++;
			}
		}
		ans = max(gueses, ans);
	}
	freopen("shell.out", "w", stdout);
	cout << ans ;
}