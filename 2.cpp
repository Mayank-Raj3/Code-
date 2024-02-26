#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nline "\n";


int main() {
	int t;
	cin >> t;
	while (t--) {
		int n ; cin >> n;
		int arr[n];
		for (int i = 0 ; i < n ; i++) {
			cin >> arr[i];

		}

		sort(arr, arr + n);
		int sum(0), min = arr[0];
		for (int i = 0 ; i < n ; i ++) {
			sum += (arr[i] - min);
		}
		cout << sum << nline;




	}

}




