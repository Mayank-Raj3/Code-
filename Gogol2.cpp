#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0)
typedef long long ll;
ll n, s, m;
ll a[100001];

bool check(ll minval) {
  ll op = 0;
  for (int i = 0; i < n; i++) {
    op += 1LL * (max(0LL, minval - a[i]));
    if (max(0LL, minval - a[i]) > m) {
      return false;
    }
  }
  return op <= m * s;
}

void solve() {
  cin >> n >> s >> m;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll low = 0, high = 1e18, ans = low;
  while (low <= high) {
    ll mid = (low + high) / 2;
    if (check(mid)) {
      low = mid + 1;
      ans = mid;
    }
    else {
      high = mid - 1;
    }
  }
  cout << ans << "\n";
}

int main() {
  fast;
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}