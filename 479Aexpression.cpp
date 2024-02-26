// 1+2*3=7
// 1*(2+3)=5
// 1*2*3=6
// (1+2)*3=9


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a , b , c ;
	cin >> a >> b >> c;

	if (a >= 1 && b <= 10 && c <= 10 ) {
		int ans[1002];

		ans[0] = a + b + c;
		ans[1] = (a * b * c);
		ans[2] = (a + b) * c;
		ans[3] = a * (b + c);
		ans[4] = a + (b * c);
		ans[5] = (a * b) + c;


		sort(ans, ans + 6);
		cout << ans[5];

	}
	return 0 ;
}


