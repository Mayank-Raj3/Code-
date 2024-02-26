//      .....All...copyright....Mynk28nov.........;
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define ld long double
#define nline "\n"

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
	int  a , b , c ; cin >> a >> b >> c ;
	vector<int> arr;//1
	arr.push_back(3);//2
	arr.push_back(11);//3
	arr.push_back(101);//4
	arr.push_back(1009);//5
	arr.push_back(10007);//6
	arr.push_back(100003);//7
	arr.push_back(1000003);//8
	arr.push_back(10000019);//9
	arr.push_back(100030001);//9

	int  x = arr[c - 1];
	int sum = 0 ;
	while (true) {
		int p = x;
		sum = 0 ;
		while (p > 0) {
			p = p / 10;
			sum++;
		}
		if (sum == a) {
			cout << x << " ";
			break;
		}

		x *= 2;
	}

	x = arr[c - 1] ;
	while (true) {
		int p = x;
		sum = 0 ;
		while (p > 0) {
			p = p / 10;
			sum++;
		}
		if (sum == b) {
			cout << x << endl;
			break;
		}

		x *= 3;
	}





}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
