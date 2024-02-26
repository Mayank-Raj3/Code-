#include<bits/stdc++.h>
using namespace std;

// int maxSum(int arr[], int n , int k) {
// 	int sum = 0;
// 	for (int i = 0 ; i < n - k + 1 ; i++) {
// 		int cursum = 0;
// 		for (int j = 0; j < k; j++)
// 			cursum += arr[i + j];

// 		sum = max(cursum, sum);

// 	}
// 	return sum;
// }

// 100  200  300  400
// |window|
//  sum = 300
// 100  200  300  400
//      |window|
// sum = 200-100+300 pichla vala minus age vala plus



int  sliding(int arr[ ], int n , int k ) {
	int sum = 0 ; int curs = 0;
	for (int i = 0 ; i < k ; i++) {
		curs += arr[i];
	}
	//phle sum nikal liya

	for (int i = k ; i < n ; i++) {
		curs += arr[i] - arr[i - k];//pichla vala minus age vala plus
		//window ik move kar rha
		sum = max(curs, sum);
	}

	return sum;
}




int main()
{
	int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
	int k = 4;
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << sliding(arr, n, k);
	return 0;
}