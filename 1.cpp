#include<bits/stdc++.h>
using namespace std;
#define nline "\n";
void sol(int len , int arr1[], int arr2[]) {
	int cnt(0);

	for (int i = 0 ; i < len ; i++) {
		int m = arr1[i], m2 = arr2[i];
		for (int j = i + 1 ; j < len ; j++) {
			if (m == arr2[j] && m2 == arr1[j]) {
				cnt++;
			}

		}

	}
	cout << cnt << nline;

}
int main() {
	int t ; cin >> t;
	while (t--) {
		int len ; cin >> len;
		int arr1[len] , arr2[len];
		for (int i = 0 ; i < len ; i++) {
			cin >> arr1[i];
		}
		for (int i = 0 ; i < len ; i++) {
			cin >> arr2[i];
		}
		sol(len , arr1, arr2);

	}
}



