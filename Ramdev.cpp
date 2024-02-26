#include<bits/stdc++.h>
using namespace std;
int main() {
	int l , b , n , L, B;
	cin >> l >> b >> n ;
	int cnt = 0;
	while (n--) {

		cin >> L >> B;
		if (l > L or b > B) continue;

		cnt += (L * B) / ( l * b);
	}

	cout << cnt;

}