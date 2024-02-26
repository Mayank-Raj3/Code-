#include<bits/stdc++.h>
using namespace std;
int main() {
	int n ; cin >> n ;
	if (n == 0 ) {
		cout << "NO";
		return 0;
	}
	if (((n ) & (n - 1)) == 0) {//bringman kelginam' s algorithm
		cout << "YES";

	}
	else cout << "NO";


}