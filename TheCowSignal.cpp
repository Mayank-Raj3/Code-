#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int main() {
	freopen("cowsignal.in", "r", stdin);
	freopen("cowsignal.out", "w", stdout);


	int n , m ,  k ; cin >> n >> m >> k ;
	for (int i = 0 ; i < n ; i ++) {
		string s; cin >> s ;
		int x = 0 ;
		string ans ="";
		while (x < m - 1) {
			int cnt = 1 ;
			char ch ;
			ch = s[x];
			while (x < m - 1 &&  s[x] == s[x + 1]) {
				cnt++;
				x++;
			}
			x++;
			string temp((k*cnt),ch);
			ans+=temp;
		}
		if (x==m-1&&s[x] != s[x - 1]){
			char ch = s[x];
			string temp((k),ch);
			ans+=temp;
		}
		for(int j = 0 ; j< k ; j++)
			cout<<ans<<nline;

	}


}