#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define vll vector<long long>
#define vi vector<int>
#define pb push_back
#define endl "\n"

int mod = 1000000007;



ll binpow(ll a, ll b, int m) {
    if (b == 0) return 1;
    ll res = binpow(a, b / 2, m);
    if (b % 2 == 0) {
        return ((res % m) * (res % m)) % m;

    } else {
        return (((res % m) * (res % m)) % m * (a % m)) % m;

    }
}

int EEA (int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    int x1, y1;
    int g = EEA(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return g;

}


int main() {
    faster;
    ll n;
    cin >> n;

    if (n % 2) {
        cout << 0 << endl;
    }


    else {
        ll deno = 10;
        ll ans = 0;
        while (deno <= n) {
            ll zero = n / deno;
            ans += zero;
            deno *= 5;
        }

        cout << ans << endl;

    }




}
