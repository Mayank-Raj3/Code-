#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a == b) {
		cout << 0 << " ";
		return 0;
	}
	int ans = 0;
	while (a > 0 && b > 0)
	{
		if (a == gc or b == a == __gcd(a, b) == gc)
			if (a > b)
			{
				ans += (a / b);
				a %= b;
			}
			else
			{
				ans += (b / a);
				b %= a;
			}
	}

	cout << ans - 1 << "\n";

	return 0;
}