#include<bits/stdc++.h>
using namespace std;
void printF(int ind , char arr[], int n , vector<char> &ds) {
	if (ind == n) {
		for (auto it : ds) {
			cout << it << " ";
		}
		if (ds.size() == 0) {
			cout << "{}" ;
		}
		cout << endl;
		return ;
	}
	printF(ind + 1, arr, n, ds);


	ds.push_back(arr[ind]);
	printF(ind + 1, arr, n, ds);
	ds.pop_back();


}
int main() {
	int n ; cin >> n ;
	char arr[n];
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	vector<char> ds;


	printF(0, arr, n, ds);

}