#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nline "\n";


int main() {
	int t;
	cin >> t;
	while (t--) {

		int n , x ;
		cin >> n >> x;
		int arr[n];
		int maxt(0), ltx(0), time(0);
		vector<int> vec;
		for (int i = 0 ; i < n ; i ++) {
			cin >> arr[i];
			if (arr[i] >= maxt) maxt = arr[i];
			if (arr[i] <= x) ltx++;
			else vec.push_back(arr[i]);
		}

		for (auto it : vec) {
			while (it > 0) {
				it = it - x;
				ltx++;
			}
		}


		if (ltx <= maxt)
		{
			cout << ltx << nline;
		}
		else {
			cout << maxt << nline;
		}
	}

}