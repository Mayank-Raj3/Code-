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
    int n;
    cin >> n;
    vector<int> a(n), b(n),  ai(n), bi(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n / 2; i++) {
        ai[i] = 1, bi[i] = 1;
    } int i = 0, j = 0;
    for (int m = 0; m < n; m++)
    {

        if (a[i] < b[j] )
        {
            ai[i] = 1;
            i++;
        }
        else
        {
            bi[j] = 1;
            j++;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ai[i];
    }
    cout << nline;
    for (int i = 0 ; i < n ; i++) {
        cout << bi[i];
    }



}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;

    while (t--) {
        solve();
    }
}
