#include<bits/stdc++.h>
using namespace std;
int main() {
	int  a, b;
	cin >> a >> b;
	int arr[a];
	for (int i  = 0 ; i < a ; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + a);
	int sum(0);
	for (int i = 0 ; i < b; i++) {
		if (arr[i] <= 0) {
			sum = sum + abs(arr[i]);
		}
	}

	cout << sum;


}