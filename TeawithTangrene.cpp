#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll mn = *min_element(arr.begin(), arr.end());


        ll ans = 0;
        ll d = 2 * mn - 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 2 * mn) {
                ll part = arr[i] / (d);
                if (arr[i] % (d) != 0)
                    part += 1;

                ans += part - 1;
            }
        }
        cout << ans << "\n";
    }
}