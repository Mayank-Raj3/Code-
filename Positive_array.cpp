#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		int a[n];
		for (auto &x : a)
			cin >> x;
		// sort(a,a+n);
		long long i = 0, neg = 0, pos = 0;
		for (; i < n; i++)
		{
			if (a[i] < 0)
				neg++;
			if (a[i] > 0)
				pos++;
		}
		n = n - i;
		long long ans = (neg * (neg - 1)) / 2 + (pos * (pos - 1)) / 2;
		cout << ans << endl;
	}
}