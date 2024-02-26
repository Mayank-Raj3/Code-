#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define ld long double
#define nline "\n"

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
//https://wentao-shao.gitbook.io/leetcode/array/1231.divide-chocolate
bool check(vector<int> arr , int n , int mid , int m ) {
	int cnt = 0 ; int sum = 0 ;
	for (int i = 0 ; i < n ; i++) {
		sum += arr[i];

		if (sum >= mid) {

			cnt++;
			sum = 0;

		}

	}
	return cnt >= (m + 1);
}
void solve() {
	int n , m ; cin >> n >> m ; vector<int> arr(n);
	int high = 0;
	for (int i = 0 ; i < n; i++) {cin >> arr[i]; high += arr[i];}
	int low = 1;
	int ans = 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (check(arr, n, mid, m)) {
			ans = mid; // true tho store karlenge aur maximize karenge
			low = mid + 1; // badaenge
		} else {
			high = mid - 1; //agr false ha tho chota karenge thaki zada subarray bane ;
		}


	}
	cout << ans;

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	solve();
}
