#include<bits/stdc++.h>

using namespace    std;
void sort(int arr[105] , int n ) {
	for (int i = 0; i < n; i++) {
		for (int j = 0 ; j < n - i - 1 ; j++) {
			if (arr[j] < arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

} int main() {

	int n , counter = 0, brosum = 0, mysum = 0;
	int arr[105];
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		brosum += arr[i];
	}

	sort(arr , n);


	for (int i = 0 ; i < n ; i++ ) {
		mysum += arr[i];
		counter++;
		if (mysum > (brosum - mysum)) {
			break;
		}
	}


	cout << counter;
	return 0;



}