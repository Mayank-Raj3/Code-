#include<bits/stdc++.h>
using namespace std;
int givesPivotPos(vector<int> &arr  , int lo , int hi ) {
	int piv = lo ;
	int i = lo , j = hi;
	while (i < j) {
		while (arr[piv] >= arr[i] && i <= hi)
			i++;
		while (arr[piv] < arr[j] && j >= lo)
			j--;
		if (i < j) swap(arr[i], arr[j]);
	}
	swap(arr[j], arr[piv]);
	return j ;
}

void quickSort(vector<int> &arr ,  int lo , int hi ) {
	if (lo < hi) {
		int pivotPos = givesPivotPos(arr, lo , hi );
		quickSort(arr, lo, pivotPos);
		quickSort(arr,  pivotPos + 1, hi);
	}
}
int main() {
	int n ; cin >> n ;// size of the array ;
	vector<int> arr(n);
	for (int i  = 0 ; i < n; i++) {
		cin >> arr[i];
	}

	quickSort(arr , 0 , n - 1);
	for (int i  = 0 ; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	sort(arr.begin(), arr.end());

	for (int i  = 0 ; i < n; i++) {
		cout << arr[i] << " ";
	}
}