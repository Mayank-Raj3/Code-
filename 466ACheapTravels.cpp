
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n , m , a, b ;
	cin >> n >> m >> a >> b;

	if ((m * a) <= b) { // m rides normal ride k paise se , b rs se kam pad rha tho (n*a)
		cout << n*a << " " << endl;
	}

	else {

		cout << (n / m)*b + min((n % m)*a, b);
	}// jitne ride le skte b rubble se usko le liye jaise 5 rides karne ha 4 ride m rides k paise se leliye
	// ab baki min(n%m ka mtlb jitne ticket bach gye jaise 5-4 = 1 tiket fir normal a rubble se lelenge ) nhi tho kuch nhi ;
}