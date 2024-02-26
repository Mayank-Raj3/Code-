#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// Sum of n odd numbers = n2 where n is a natural number.
int main() {
	long long  t, n, k;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		if (k * k <= n) // if k*k == n ;
		{
			if ((n + k) % 2 == 0)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else
			cout << "NO" << endl;
	}
}