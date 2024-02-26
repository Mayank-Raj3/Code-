#include<bits/stdc++.h>
using namespace std;
void revs(int n , char arr[], int i ) {
	if (i >= n / 2) {
		return ;
	}

	int temp = arr[i];
	arr[i] = arr[n - i - 1];
	arr[n - i - 1] = temp;
	revs(n, arr, i + 1);

}
int main() {
	int n ; cin >> n;
	char arr[n];
	for (int i = 0 ; i < n; i++) {
		cin >> arr[i];

	}

	revs(n , arr, 0);
	for (int i = 0 ; i < n; i++) {
		cout << arr[i] << " ";

	}
}