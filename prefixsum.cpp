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


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n ; cin >> n ;
    int a[n];
    for (int i = 0 ; i < n ; i++) cin >> a[i];
    int prefix_sum[n];
// prefix sum in O(n);

    prefix_sum[0] = a[0];
    cout << prefix_sum[0] << " ";
    for (int i = 1; i < n; i = i + 1 ) {
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
        cout << prefix_sum[i] << " ";
    }


    cout << nline << ( prefix_sum[5] - prefix_sum[2]);

}
