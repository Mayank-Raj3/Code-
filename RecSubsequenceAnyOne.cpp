//way to print any one subsequence using recursion ;

#include<bits/stdc++.h>
using namespace std;

bool  Sub(int ind , int arr[], vector<int> &ds, int n , int sum, int s) {
	if (ind == n) {
		if (sum == s) {
			for (auto it : ds ) {
				cout << it << " ";
			}


			cout << endl;
			return true;

		}
		else return false;
	}

	ds.push_back(arr[ind]);
	sum += arr[ind];
	if (Sub(ind + 1, arr, ds, n, sum, s) == true) return true;
	ds.pop_back();
	sum -= arr[ind];
	if (Sub(ind + 1, arr, ds, n, sum, s) == true) return true;
	return false;
}
int main() {
	int n, s ; cin >> n >> s ;
	int arr[n];
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	vector<int> ds;
	Sub(0, arr, ds, n, 0, s);

}