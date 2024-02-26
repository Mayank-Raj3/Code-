#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum = 0 ;
	bool ok = false;
	for (int i = 0 ; i < 5 ; i++) {
		int x ; cin >> x ;
		sum += x;
		if (x == 0) ok = true;
		else ok = false;
	}
	if (sum == 0) {
		cout << -1; return 0;
	}

	if (sum % 5 == 0) cout << sum / 5;
	else cout << -1;


}