#include<bits/stdc++.h>
using namespace std;
//hame pta karna ha kitne log acm icpc khel skta ik banda max 5 khel skta
//ham input mea 5 bande aur kitne bar kilana ha
// tho phle ham add kardenge kitne bar kilana + kitni bar phle khela agr ye 5 ya 5 se kam hua tho khel skta aut count ko ik se bada denge;
// fir 3 ki team hone chiye tho / 3 karke nikal lenge ;
int main() {
	int n , k, persons;
	int count = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> persons;

		if (persons + k <= 5) {
			count++;
		}
	}

	cout << ( count / 3);

	return 0;
}