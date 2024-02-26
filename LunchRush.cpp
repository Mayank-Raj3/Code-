#include<bits/stdc++.h>
using namespace std;

int main() {
	int n , k ;
	int f, t , max, cf;
	cin >> n >> k;
	cin >> f >> t;
	if (t > k) {
		max = f - (t - k);
	}

	else max = f ;

	while (n--) {
		cin >> f >> t;
		if (t > k) {
			cf = f - (t - k);
		}

		else cf = f;

		if ( cf > max)  max = cf;


	}
	cout << max;
}