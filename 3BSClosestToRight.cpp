#include<bits/stdc++.h>
using namespace std;
int main() {
	int n , k ; // size and the element that needs to be searched

	cin >> n >> k ;
	vector<int> arr(n);
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < k ; i++) {
		int x;
		cin >> x;
		int l = -1 ; // extra element at the left
		int r = n ; // and to the right


		while (r - l > 1) { // take l and r adjacent ho jae
			int m = (l + r) / 2;
			if (arr[m] < x) {
				l = m ;
			}

			else r = m ;
		}
		cout << r + 1 << "\n";
	}

}