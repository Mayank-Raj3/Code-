#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;


int main() {
	freopen("mixmilk.in", "r", stdin);
	vector<pair<int, int>> arr(3);
	cin >> arr[0].first;
	cin >> arr[0].second;
	cin >> arr[1].first;
	cin >> arr[1].second;
	cin >> arr[2].first;
	cin >> arr[2].second;
	for (int i = 0 ; i < 100; i++) {
		int amt = min(arr[i % 3].second, (arr[(i + 1) % 3].first - arr[(i + 1) % 3].second));
		arr[i % 3].second -= amt;
		arr[(i + 1) % 3].second += amt;
	}
	freopen("mixmilk.out", "w", stdout);
	for (auto it : arr) cout << it.second << endl;

}