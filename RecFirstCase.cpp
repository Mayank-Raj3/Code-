#include<bits/stdc++.h>
using namespace std;
int first(int arr[], int n, int x) {
	if (n == 0) {
		return -1;
	}
	if (arr[0] == x) {
		return 0;
	}

	int ans = first(arr + 1, n - 1, x);
	if (ans == -1) {
		return -1;
	}
	else {
		return ans + 1 ;
	}
}


int main() {
	int n , x ; cin >> n >> x ;
	int arr[n];
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	cout << first(arr, n, x);
}