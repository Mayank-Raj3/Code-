#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, m, last;
	double t, max(0);
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		cin >> t;
		if (ceil(t / m) >= max)
		{	cout << i << " " << ceil(t / m);

			last = i;
			max = ceil(t / m);
			cout << " max:" << max << "| " << "\n";
		}
	}

	// cout << last << endl;
	return 0;
}