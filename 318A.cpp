
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long arr[n];
    int sum = 1;
    int x = 2;
    for (int i = 0 ; i < n; i++) {

        arr[i] = sum;
        sum = sum + 2;
    }
    for (int i = (n / 2)  ; i < n ; i++) {

        arr[i] = x;
        x = x + 2;
    }

    for (int i = 0 ; i < n ; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl;

    cout << arr[k - 1];




    return 0 ;
}


//will do it later