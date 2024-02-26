#include<bits/stdc++.h>
using namespace std;

int main() {
	int  k, n, w ;
	cin >> k >> n >> w;
	int money = 0;
	for (int i = 1 ; i <= w ; i++) {
		money = i * k + money;
	}

	int bro = money - n ;
	if (bro > 0 ) {
		cout << bro;
	}
	else cout << 0 ;

}