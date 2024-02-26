#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int mon = 0, ans = 0 , n;
		cin >> n >> mon;
		vector<int> a(n), b(n);

		for (int i = 0 ; i < n ; i++) cin >> a[i];
		for (int i = 0 ; i < n ; i++) cin >> b[i];

		vector<pair<int , int >> data;
		for (int i = 0 ; i < n ; i++) {
			int eff = a[i] - b[i];
			data.push_back({eff, a[i]});

		}


		sort(data.begin(), data.end()); // by default sort by first
		for (auto it : data) {
			const int eff = it.first , orignal = it.second,
			          cashback = orignal - eff;

			if (mon < orignal) continue;
			mon += orignal;
			ans += mon / eff;
			mon += cashback;



		}
		cout << ans << endl;
	}

}
