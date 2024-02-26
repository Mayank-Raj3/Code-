#include<bits/stdc++.h>
using namespace std;

int main() {
	double t, x, sum = 0 ;
	cin >> t;
	for (int i = 0 ; i < t; i++) {
		int m; cin >> m;
		sum += m / (100.0);


	}
	cout << (double)sum / t * 100;
}




// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,a[110];
//     cin>>n;
//     double ans=0.0,sum=0.0;
//     for(int i=0; i<n; i++)
//     {
//         cin>>a[i];
//         sum+=a[i];
//     }
//     ans=sum/n;
//     cout<<fixed<<setprecision(12)<<ans<<endl;

//     return 0;
// }