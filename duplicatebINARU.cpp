//question given an array of duplicate find the first occourernce of x;


#include<bits/stdc++.h>
using namespace std;
int main() {
	int n , x;
	cin >> n >> x ;
	vector<int> a(n);


	for (int i = 0 ; i < n ; i ++) {
		cin >> a[i];
	}

	int start = 0, end = n - 1;
	int result = -1;
	while (end - start > 1)

	{
		int mid = (start + end ) / 2;
		if (a[mid] >= x) {
			result = mid;
			end = mid - 1;
		}
		else
			start  = mid;
	}
	cout << result;



}


