#include<bits/stdc++.h>
using namespace std;
int add(int arr[], int n) {
	if (n <= 0) {
		return 0;
	}

	return add(arr, n - 1) + arr[n - 1];




}
int main() {
	int n = 5;
	int arr[5] = {0, 2, -2, 4, -4};
	cout << add(arr, n);

}

