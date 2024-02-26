#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<vector<int>> arr(n, vector<int>(n));
		int maxi = n * n, mini = 1;
		if (n == 2)
		{
			cout << 1 << " " << 3 << "\n";
			cout << 4 << " " << 2 << "\n";
		}
		else if (n % 2 == 0) {
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (j & 1)
					{
						cout << maxi << " ";
						maxi--;
					}
					else {
						cout << mini << " ";
						mini++;
					}
				}
				cout << "\n";
			}
		}
		else {
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (j & 1 && i % 2 == 0)
					{
						cout << maxi << " ";
						maxi--;
					}
					else if (i & 1 && j % 2 == 0)
					{
						cout << maxi << " ";
						maxi--;
					}
					else {
						cout << mini << " ";
						mini++;
					}
				}
				cout << "\n";
			}
		}
	}
}