//      .....All...copyright....Mynk28nov.........;
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define ld long double
#define nline "\n"

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
bool check(vector<long long> &arr, long long k, long long target)
{
	long long n = arr.size();
	long long ans = 0;
	for ( long long i = n / 2; i < n; i++)
	{
		if (target > arr[i])
			ans += target - arr[i];
	}
	if (ans <= k)
	{
		return true;
	}
	return false;
}
int main() {
	long long n, k;
	cin >> n >> k;
	vector<long long> arr(n);
	for (long long i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	long long low = arr[n / 2], high = arr[n / 2] + k;
	long long median = arr[n / 2];
	while (low <= high)
	{
		long long mid = low + (high - low) / 2;
		if (check(arr, k, mid))
		{
			median = mid;
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	cout << median << "\n";
	return 0;

}
