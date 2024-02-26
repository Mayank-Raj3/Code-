
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int arr[m];
	for (int i = 0; i < m; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + m);
	//since we want to sort full array ; from 0the to 5th index
	//we will get sorted array and have to take least diffrence ;

	int leastvalue = arr[n - 1] - arr[0];
	for (int i = 1; i <= m - n ; ++i) { ///  5 6 7 8 9

		if (arr[i + n - 1] - arr[i] < leastvalue) {
			leastvalue = arr[i + n - 1] - arr[i]; //like 0-3; 1-4,2-5;//lasrgest is 3,4,5
		}                                  // since it is sorted in ascending order;
	}                                     // is least arr[3]-arr[0];
	cout << leastvalue << "\n";
	return 0;
}




