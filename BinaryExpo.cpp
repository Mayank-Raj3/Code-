#include<bits/stdc++.h>
using namespace std;

#define  ll long long

ll expo(ll a, ll b) {
	ll res = 1; while (b > 0) {
		if (b % 2 != 0) // odd ha th0 resukt mtlb bit 1 ha tho 2 ki poower * res = (res * a);
			a = (a * a) ; // har iteration mea bdate is lie multiply karte
		b = b >> 1;//  1    0    0    1
		// 2^3  2^2  2^1  2^0
	}
	return res;
}


#include<bits/stdc++.h>
using namespace std;
int main() {
	int a , b ; cin >> a >> b ;
	cout << expo(a, b);

}

