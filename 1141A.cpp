#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m; //input liya n and m ;
	int result = -1; //res ko -1 man liya
	if (m % n == 0) { //agr n m ko divide kiya tho result = 0 mtlb soln possible ha
		result = 0;
		int d = m / n; //devide kiya n
		//devide isliye kiya kyuki ham piche se ja rhe divide kar kar k tho n ko hata diya total se


		while (d % 2 == 0)//
			d /= 2, result++; //jab tak d 2 se divisible ha / by 2kra
		while (d % 3 == 0)
			d /= 3, result++; //same idr bhi
		if (d != 1)
			result = -1; //agr d 1 nhi aaya last mea retrun -1
	}
	cout << result << endl;

}