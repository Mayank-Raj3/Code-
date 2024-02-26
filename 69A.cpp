#include <iostream>

using namespace std;
// for a body to be in equilibrium all the forces acting on x , y ,z coodinate must be zero so
//x1+x2+x3+.............xn=0;
//y1+y2+y3.....yn=0 similarly zn+=0;
int main()
{
	int n, x, y, z, xsum = 0, ysum = 0, zsum = 0;
	cin >> n;

	while (n--)
	{
		cin >> x >> y >> z;
		xsum += x;
		ysum += y;
		zsum += z;
	}

	if (xsum == 0 && ysum == 0 && zsum == 0)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}