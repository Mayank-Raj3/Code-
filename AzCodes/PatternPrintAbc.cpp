#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define nline "\n"
#define ps(x, y) fixed << setprecision(y) << x
#define all(var) var.begin(), var.end()
#define pb push_back
void solve() {
	/*
	a       i       q       y
	 b     h j     p r     x z
	  c   g   k   o   s   w
	   d f     l n     t v
	    e       m       u
	*/
	char ch = 'a';
	for (int i = 0 ; i < 5 ; i++) {
		for (int j = 0 ; j < 26 ; j++) {
			// if (i % 8 == j % 8 || (i % 8 + j % 8) == 8) {
			if (i  == j % 8 || (i  + j % 8) == 8) {
				cout << char(ch + j);
			}
			else {
				cout << " ";
			}
		}
		cout << nline;
	}
}

void solve2() {

	int n , m , o; cin >> n >> m >> o ;
	for (int i = 0 ; i <= (m * n ); i++ ) {
		for (int j = 0 ; j <= (m * m ); j++) {
			if (i % m == 0 || j % m == 0) {
				cout << "*";
			} else {
				if ((i - j ) % (o  )   )
					cout << "/";
				else if ((i - j) % (o ) == 0)
					cout << '.';
				else
					cout << '.';
			}
		}
		cout << nline;
	}



}
signed main() {
	int t ; cin >> t ;
	while (t--)
		solve2();
}