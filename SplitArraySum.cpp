#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define ld long double
#define nline "\n"

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
bool check(vector<int> arr , int n , int mid , int m ) {
	int cnt = 1 ; int sum = 0;
	for (int i = 0 ; i < n ; i++) {

		if (arr[i] > mid) return false;

		if (sum + arr[i] > mid) {
			cnt++; sum = arr[i];
		}
		else {
			sum += arr[i];
		}
	}
	return cnt <= m;
}
void solve() {
	int n , m ; cin >> n >> m ; vector<int> arr(n);
	int high = 0;
	for (int i = 0 ; i < n; i++) {cin >> arr[i]; high += arr[i];}
	int low = *max_element(arr.begin(), arr.end());
	int ans = high;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (check(arr, n, mid, m) == false) {
			low = mid + 1 ;
		} else {
			ans = mid;
			high = mid - 1;
		}


	}
	cout << ans;

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	solve();
}
