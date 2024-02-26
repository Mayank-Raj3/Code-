#include<bits/stdc++.h>
using namespace std;
void sortAndMerge(vector<int> &arr , int mid , int lo , int hi ) {
	vector<int> temp;
	int i = lo ; // left half
	int j = mid + 1 ; // rigth half
	// normally using two pointer and merging them
	while (i <=  mid &&  j <=  hi) {
		if (arr[i] > arr[j]) {
			temp.push_back(arr[j]);
			j++;
		} else {
			temp.push_back(arr[i]);
			i++;
		}
	}
	//
	while (i <= mid) {
		temp.push_back(arr[i]);
		i++;
	}

	while (j <= hi) {
		temp.push_back(arr[j]);
		j++;
	}

	for (int x = lo ; x <= hi ; x++) {
		arr[x] = temp[x - lo];
	}
}

void mergeSort(vector<int> &arr ,  int lo , int hi ) {
	if (lo == hi) return ; // sab single element me phuch jayega then we have to return
	// first half me breat karn ha so first we calculate mid
	int mid = (lo + hi) / 2;
	mergeSort(arr, lo, mid);
	// second half
	mergeSort(arr, mid + 1, hi);
	// jab vapis ayega then we have to merge them
	sortAndMerge(arr, mid , lo , hi );
}
int main() {
	int n ; cin >> n ;// size of the array ;
	vector<int> arr(n);
	for (int i  = 0 ; i < n; i++) {
		cin >> arr[i];
	}

	mergeSort(arr , 0 , n - 1);
	for (int i  = 0 ; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	sort(arr.begin(), arr.end());

	for (int i  = 0 ; i < n; i++) {
		cout << arr[i] << " ";
	}
}