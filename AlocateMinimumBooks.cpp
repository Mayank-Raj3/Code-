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
bool AllocatedStudents (vector<int> arr,  int Barrier , int n , int std) {
	int cnt = 1; // number of students allocated  =1 phla bacha ;
	int sum = 0 ; //number of plages
	for (int i = 0 ; i < n ; i++) {
		if (arr[i] > Barrier) return false; //agr  page Barrier se bara ha tho false  since sum exceed kar rha
		if (sum + arr[i] > Barrier) { // sum + arr[i ] agr barrier se bada ha tho
			cnt += 1; //naya student ko book
			sum = arr[i]; // sum = arr[i];
		}
		else sum += arr[i]; // nhi tho book dete jao ik he student ko
	}

	if (cnt > std) return false;
	else return true;
}

void solve() {
	int n , std ; cin >> n >> std;
	vector<int> arr(n);
	int hi = 0;
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
		hi += arr[i];
	}

	int lo = *min_element(arr.begin(), arr.end());

	int ans = -1;
	if (n < std) {cout << -1 ; return ;}

	while (lo <= hi) {
		int mid = (lo + hi) / 2;
		if (AllocatedStudents(arr, mid , n , std )) {
			ans = mid; // true aa rha tho thik ha possible ans ha
			hi = mid - 1; // par chota karo  since minimum of max chiye;
		}
		else {
			lo = mid + 1;

		}

	}
	cout << ans;

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	solve();
}
