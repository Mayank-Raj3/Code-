#include<bits/stdc++.h>
using namespace std;

void swap(int *p , int *q ) {
	int temp  = *p;
	*p = *q;
	*q = temp;
}





void bubble(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++) //pass will be n-1
		for (j = 0; j < n - i - 1; j++)//n-i-1 length reduce kar rha ha taki element lock hote rhe
			if (arr[j] > arr[j + 1]) //largest element last mea aa rha
				swap(arr[j], arr[j + 1]);
}




void selection(int arr[], int n) {
	for (int i = 0 ; i < n - 1 ; i++) {
		int min = i; //lets assume 0th index is smallest
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min]) {
				min = j; //finding minimum idex
			}
		}

		swap( &arr[min] , &arr[i]); //swaping with adress
	}
}




void insertion(int arr[], int n)
{
	int i, temp, j;
	for (i = 1; i < n; i++)
	{
		temp = arr[i]; //element ko temprory var mea save kar rha
		j = i - 1; //ik var jo ki chek karega ki temp kha jayega

		/* Move elements of arr[0..i-1], that are
		greater than temp, to one position ahead
		of their current position */
		while (j >= 0 && arr[j] > temp) //agr arr[j] temp se bada ha tho
		{	//  starts from arr[0] since j=1-1=0;
			arr[j + 1] = arr[j]; //swap
			j = j - 1;
		}
		arr[j + 1] = temp;//note this is after while j value will be less since j--
	}
}






int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	// selection(arr, n);
	// bubble(arr, n);
	insertion(arr, n);

	for (int i = 0 ; i < n ; i++) {
		cout << arr[i] << " ";
	}
}