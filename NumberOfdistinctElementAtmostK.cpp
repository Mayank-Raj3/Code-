#include <bits/stdc++.h>
using namespace std;
#define  int  long long
int freq[1000001];
signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i], freq[arr[i]] = 0;

        int r = 0, l = 0;
        int  ans = 0, currdistinct = 0;

        for (int r = 0 ; r < n; r++) {
            freq[arr[r]]++; //increae frq of that element

            if (freq[arr[r]] == 1) //agr fre
                currdistinct++;

            while (l <= r and currdistinct > k) { //agr distinct element k se bada ho gya tho nikalna suru
                if (freq[arr[l]] == 1)
                    currdistinct--;
                freq[arr[l]]--;
                l++;
            }
            if (currdistinct <= k)
                ans += (r - l + 1);

        }

        cout << ans << "\n";
    }

}