#include<bits/stdc++.h>
using namespace std;

int main() {
	int n  , a, b;
	cin >> n;
	vector<int> vec;
	int sum = 0 ;
	while (n--) {
		cin >> a >> b;
		sum = b - a + sum;
		vec.push_back(sum);

	}
	int x = vec.size();
	sort(vec.begin(), vec.end());

	cout << vec.at(x - 1);
}