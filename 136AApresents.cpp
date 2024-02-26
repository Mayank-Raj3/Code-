#include<bits/stdc++.h>

using namespace    std;
//question
int main() {


	int n ;
	cin >> n;

	int arr[105];

	for (int i = 0 ; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 1 ; i <= n; i++) {
		for (int j = 0 ; j < n; j++) {

			if (arr[j] == i ) {

				cout << (j + 1) << " ";


			}
		}

	}

}









