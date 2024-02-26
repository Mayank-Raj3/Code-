#include<bits/stdc++.h>
using namespace std;
int create(int arr[] , int n  , int sum ) {
	if (n == 0) {
		if (sum == 0) return 1 ;
		else
			return 0 ;
	}

	return create(arr, n - 1, sum) + create(arr, n - 1, sum - arr[n - 1]);

}


int main() {
	int n , sum ; cin >> n >> sum ;
	int arr[n];
	for (int i =  0 ; i < n ; i++) {
		cin >> arr[i];
	}
	cout << create(arr, n , sum );



}