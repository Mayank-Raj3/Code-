#include<bits/stdc++.h>
using namespace std;


int main() {
    int t ; cin >> t ;
    while (t--) {
        int n , m , p ;
        cin >> n >> m >> p ;
        vector<vector<int>> arr(n, vector<int>(m));
        vector<vector<int>> brr(m, vector<int>(p));
        vector<vector<int>> ans(n, vector<int>(p));
        for (int i = 0 ; i < n ; i++)
            for (int j = 0 ; j < m ; j++)
                cin  >> arr[i][j];

        for (int i = 0 ; i < m ; i++)
            for (int j = 0 ; j < p ; j++)
                cin  >> brr[i][j];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < p; j++) {
                ans[i][j] = 0;
                for (int k = 0; k < m; k++) {
                    ans[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < p; j++) {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
}
