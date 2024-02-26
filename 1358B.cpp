#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n ; cin >> n;
		int  arr[n + 1];
		for (int i = 1 ; i <= n ; i++) {
			cin >> arr[i];
		}
		// phle  sare element array mea lena ha
		sort(arr + 1, arr + n + 1); //sort kiya

		int tot = 0;
		// ulta iterate kiya
		//  1 1 2 2 1
		//  1 2 3 4 5
		//agr 5 lady sth mea aye aur last element se bade hue tho sab lady join karlgi part + 1(maria)
		for (int i = n ; i >= 1 ; i--) {
			if ( i >= arr[i]) {
				tot = i; //i=5 lady
				break;
			}
		}
		cout << tot + 1 << endl; //i + 1(maria );


	}

}