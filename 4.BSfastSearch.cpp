#include<bits/stdc++.h>
using namespace std;
int main() {
	int n , k ;
	cin >> n  ;
	std::vector<int> arr(n);

	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	cin >> k;

	for (int i = 0; i < k; i++) {
		int l , r ;
		cin >> l >> r ;
		if (r - l >= n) cout << n << "\n";
		else if (r == l) cout << 0 << "\n";
		else cout << (r - l) + 1 << "\n";

	}


}