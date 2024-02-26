#include<bits/stdc++.h>
using namespace std;
int bin(int arr[], int len, int x, int start , int end ) {
	if (start >= end) {
		return -1;
	}
	int mid = (start + end) / 2;
	if (arr[mid] == x) {
		return mid ;
	}
	if (x < arr[mid]) {
		return bin(arr, len, x, start , mid - 1);
	}

	return bin(arr, len, x, mid + 1, end);
}
int main() {
	int len , x ; cin >> len >> x;
	int arr[len];
	for (int i = 0 ; i < len ; i++) {
		cin >> arr[i];
	}
	// for (int i = 0 ; i < len ; i++) {
	// 	cout << arr[i] << " ";
	// }
	int start = 0, end = len - 1;
	cout << bin(arr, len, x, start , end);

}