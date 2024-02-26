#include<bits/stdc++.h>
using namespace std;
int main() {
	int n ; cin >> n;
	int arr[n];
	map<int, int > map;
	for (int i = 0 ; i < n; i++) {
		cin >> arr[i];

	}

	for (int i = 0; i < n; i++) {
		map[arr[i]]++;
	}

	for (auto it : map) {
		if (it.second % 2 == 1) {
			cout << it.first;
		}
	}

}
