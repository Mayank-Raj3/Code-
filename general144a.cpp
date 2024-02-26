#include<bits/stdc++.h>

using namespace std;
//question
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

int  selectionSort(int arr[], int n)
{
	int i, j, min_idx;
	int c = 0;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n - 1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;

		// Swap the found minimum element with the first element
		c++;
		swap(&arr[min_idx], &arr[i]);
	}
	return c ;
}

int main() {

	int n , c = 0;
	cin >> n;

	if (n < 2) {
		return 0;

	}


	int arr[102];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int x =	selectionSort(arr, n);

	cout << x;



}









