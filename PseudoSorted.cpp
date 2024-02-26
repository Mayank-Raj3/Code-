#include<bits/stdc++.h>
using namespace std;

// The compiler would there only create an dynamic array of
// size N with all values initialized to zero.
// Now, you can randomly access elements but only from  v[0]  to  v[N−1] .
// But, if you want to add more than N elements then you can anytime use the push _ back()  function to add elements.
int main() {
	int t ;
	cin >> t ;
	while (t--) {
		int n;
		cin >> n;
		vector<int> arr(n);
		for (int i = 0 ; i < n; i++) {
			cin >> arr[i];
		}


		for (int i = 0 ; i < n - 1 ; i++) {
			if (arr[i] > arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
				break;
			}
		}



		if (is_sorted(arr.begin(), arr.end())) {
			cout << "YES" << endl;

		}
		else {
			cout << "NO" << endl;
		}
	}

}