#include<bits/stdc++.h>
using namespace std;

int main() {
	int n = 3, arr[3];

	for (int i = 0 ; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);
	cout << arr[2] - arr[0];


}