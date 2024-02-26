#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll n, s;
	cin >> n >> s;
	// vector<pair<int,int>> arr(n);
	map<int, int> arr;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		arr[i] = max(arr[i], b);
	}
	int  time = 0;
	for (int i = s; i > 0; i--)
	{
		if (arr[i] > time)
		{
			time = arr[i];
		}
		time++;
	}
	cout << time;
	return 0;
}