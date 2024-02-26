
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
	int  bsearch(int arr[], int n , bool searchfirst , int x)
	{	int lo = 0  , hi = n - 1, res = -1;

		while (lo <= hi) {
			int mid = (lo + hi) / 2;
			if (arr[mid] == x) {
				res = mid ;
				if (searchfirst)
					hi = mid - 1;
				else
					lo = mid + 1;
			} else if (x < arr[mid]) {
				hi = mid - 1;
			}
			else lo = mid + 1;
		}
		return res;

	}




	int count(int arr[], int n, int x) {
		int first = bsearch(arr, n, true, x);
		if (first == -1) return 0;
		int last = bsearch(arr, n, false, x);
		return (last - first + 1);
	}
};

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		Solution ob;
		auto ans = ob.count(arr, n, x);
		cout << ans << "\n";
	}
	return 0;
}
