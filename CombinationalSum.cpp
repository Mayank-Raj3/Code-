#include<bits/stdc++.h>
using namespace std;
void combi(int ind , int tar, vector<int> &ds, vector<vector<int>> &ans, int arr[], int n ) {
	if (ind >= n) {
		if (tar == 0) {
			ans.push_back(ds);
		}
		return ;
	}


	if (tar >= arr[ind]) {
		ds.push_back(arr[ind]);
		combi(0, tar - arr[ind], ds, ans, arr, n);
		ds.pop_back();

	}

	combi(ind + 1 , tar , ds , ans , arr, n );




}
int main() {
	int n , tar; cin >> n >> tar ;
	int arr[n];
	for (int i  = 0 ; i < n ; i++) {
		cin >> arr[i];
	}

	vector<int> ds ;
	vector<vector<int>>  ans;


	combi(0, tar, ds, ans, arr, n);
	for (auto it : ans) {
		for (auto k : it) {
			cout << k << " ";

		}
		cout << endl;
	}

}