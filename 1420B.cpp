#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n ; cin >> n;
		int arr[n];
		for (int i = 0 ; i < n ; i++) {
			cin >> arr[i];
		}
		int sum = 0;
		for (int i = 0 ; i < n ; i ++) {
			for (int j = 0 ; j < n ; j++) {
				if ((i < j) && (arr[i] & (arr[j] > (arr[i]^arr[j])))) {
					sum ++;
				}
			}
		}
		cout << sum << endl;

	}
}

// i<j and ai & aj≥ai⊕aj