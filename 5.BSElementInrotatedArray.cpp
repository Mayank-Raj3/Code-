#include<bits/stdc++.h>
using namespace std;

int main() {
	int n , x ;
	cin >> n >> x;
	vector<int> arr(n);

	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	int start = 0;
	int end = n - 1;
	while (start <= end) {
		int mid = (start + end ) / 2;
		if (arr[mid] == x) {
			cout << mid ;
			break;
		}

		else if (arr[mid] <= arr[end]) { // agr array ka right sorted ha  ;

			if (x > arr[mid] and x <= arr[end]) { // agr element sorted array k bich mea ha
				start = mid + 1;
			}
			else end = mid - 1 ;


		}

		else if (arr[start] <= arr[mid]) {
			if (x >= arr[start] and x < arr[mid]) {
				end = mid - 1 ;
			}
			else start = mid + 1 ;

		}


	}

}