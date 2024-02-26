#include <bits/stdc++.h>
using namespace std;
bool check(double mid, vector<int> &arr, int n, int k)
{
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		ans += floor(arr[i] / mid);
	}
	if (ans >= k)
	{
		return true;
	}
	return false;
}
int main() {
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	int maxi = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		maxi = max(maxi, arr[i]);
	}
	double left = 0, right = maxi;
	double ans = left;

	for (int i = 0; i < 200; i++)
	{
		double mid = left + (right - left) / 2;
		if (check(mid, arr, n, k))
		{
			ans = mid;
			left = mid;
		}
		else {
			right = mid;
		}
	}

	cout << setprecision(20) << ans << "\n";
	return 0;
}