#include<bits/stdc++.h>

using namespace std;

int main() {
	int k, l, m, n, d;
	cin >> k >> l >> m >> n >> d;
	int count = 0;
	for (int i = 1; i <= d; i++) {
		if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) { // agr kisi se bhi divisible tho count +++;
			count++;
		}
	}
	cout << count;
	return 0;
}