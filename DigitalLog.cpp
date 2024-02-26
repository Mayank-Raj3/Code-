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
int countDig(int n ) { // gives the count of number ;
	int ans = 0 ;
	while (n) {
		ans++;
		n = n / 10;
	}
	return ans;
}
void solve() {
	int n ; cin >> n ;
	priority_queue<int> pq1, pq2; // using priority que since gives out the max value at top position
	for (int i = 0 ; i < n ; i++)
	{
		int x ; cin >> x ;
		pq1.push(x);
	} // input le rhe

	for (int i = 0 ; i < n ; i++)
	{
		int x ; cin >> x ;
		pq2.push(x);
	}
	int ans = 0 ;
	while (!pq1.empty() && !pq2.empty()) { // jab tak khani nhi hota
		int x = pq1.top() , y = pq2.top();  // agr dono element same ha tho pop kar rhe bina koi operation lagaye
		if (x == y) {
			pq1.pop();
			pq2.pop();
		}

		else if (x > y) {
			pq1.pop();  // agr x bada ha tho pop kar rhe aur operation lga k insert kar rhe ;
			ans++;
			pq1.push(countDig(x));

		}
		else {
			pq2.pop();    // agr y bada ha
			ans++;
			pq2.push(countDig(y));

		}



	}


	cout << ans << nline;


}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
