#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, t(0);
	cin >> n;
	int x[n], y[n];

	for (int i = 0; i < n; i++)
		cin >> x[i] >> y[i];//taking x nad y as input

	for (int i = 0; i < n; i++)
	{	// r , l u , d as false
		bool r(false), l(false), u(false), d(false);
		for (int j = 0; j < n; j++)
		{
			// cheking as input ;
			if (x[j] >  x[i] and y[j] == y[i]) r = true;
			if (x[j] <  x[i] and y[j] == y[i]) l = true;
			if (x[j] == x[i] and y[j] > y[i]) u = true;
			if (x[j] ==  x[i] and y[j] < y[i]) d = true;
		}
		if (r and l and u and d) t++; //if all are true then t++;
	}

	cout << t << endl; // printing;
	return 0;
}