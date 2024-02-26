#include<bits/stdc++.h>
using namespace std;
int main() {
	int n ; cin >> n ;
	int arr[n];
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	int maxi = 0, cur = 0 ;
	for (int i = 0 ; i < n ; i++) {
		cur += arr[i];
		if (cur > maxi) {
			cur = maxi;
		}
		if (cur < 0) {
			cur = 0;
		}
	}
	cout << maxi;

}