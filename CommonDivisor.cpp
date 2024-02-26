//      .....All...copyright....Mynk28nov.........;
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define ld long double
#define nline "\n"
int gcd(int a , int b) {while (b != 0) {a = a % b; swap(a, b);} return a;}
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve1() {
	int n ;
	cin >> n ;
	int ans = 1;
	vector<int> arr(n) ;
	for (int i = 0 ; i < n ; i++) cin >> arr[i];
	for (int i = 0 ; i < n ; i ++) {
		for (int j = 0 ; j < i; j++) {
			ans = max(ans, gcd(arr[i], arr[j]));

		}
	}

	cout << ans << nline;


}
void solve2() {
	int n ;
	cin >> n ;
	int ans = 1;
	vector<int> arr(n) ;
	for (int i = 0 ; i < n ; i++) cin >> arr[i];
	sort(arr.begin(), arr.end());
	int mx = arr[n - 1];
	for (int i = 1 ; i <= mx ; i++) {
		int cnt = 0 ;
		for (int j = 0 ; j < n ; j++) {
			if (arr[j] % i == 0) {
				cnt++;
			}
		}

		if (cnt > 1) {
			ans = max(ans, i);
		}
	}

	cout << ans << nline;



}

void solve3() {
	int n ;
	cin >> n ;
	vector<int> arr(1e6 + 1, 0) ; //vector of 1e6 initialize with 0
	for (int i = 0 ; i < n ; i++) {
		int x ; cin >> x;
		arr[x]++; // jo array mea elements ha usko +1;
	}
	for (int g = 1e6 ; g >= 1 ; g--) {
		int multiple = 0 ;
		for (int p = g ; p <= 1e6 ; p += g) {
			multiple += arr[p];
		}
		if (multiple > 1) {
			cout << g << " " << nline;
			return ;
		}

	}

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	// solve1();
	// solve2();
	solve3();
}
