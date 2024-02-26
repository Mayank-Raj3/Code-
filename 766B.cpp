#include<bits/stdc++.h>
using namespace std;
/*degenerate triange means a b c sides
if a+b>c
 b+c>a
 c+a>b
 then area + and is called denerate ;*/

int main() {
	int n ; cin >> n;
	int arr[n];
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	bool ok = false;
	for (int i = 2; i < n ; i++) {
		if (arr[i - 2] + arr[i - 1] > arr[i]) {
			ok = true;
			break;
		}

	}
	if (ok) {
		cout << "YES\n";
	} else cout << "NO\n";
}