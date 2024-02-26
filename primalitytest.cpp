#include<bits/stdc++.h>
using namespace std;

bool isprime(int n ) {
    if (n == 1) return false;
    for (int i = n ; i * i < n; i++  ) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int t , n ;
    cin >> t;
    while (t--) {
        cin >> n;
        if (isprime(n)) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;

    }
}