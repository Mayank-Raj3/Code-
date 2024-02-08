#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

#define ll long long

ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll binpow(ll a, ll b, ll mod) {a %= mod; ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a * 1ll) % mod; b = b >> 1; } return res; }
ll mminvprime(ll a, ll b) {return binpow(a, b - 2, b);}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m


class ProductOfKNumbers {
public:
	vector<ll> ans ;
	ProductOfKNumbers() {
		ans.clear();
		ans.push_back(1ll);
	}

	void add(int num) {
		if (num == 0 ) {
			ans.clear();
			ans.push_back(1ll);
		}
		else
			ans.push_back(mod_mul(ans.back(), num, mod));
	}

	int getProduct(int k) {
		if (ans.size() < k) {
			return 0 ;
		} else {
			if (ans.size() == k)
				return 0 ;
			else
				return mod_div(ans.back(), ans[ans.size() - k - 1], mod);
		}

	}
};


int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	int Q;
	cin >> Q;

	ProductOfKNumbers productOfKNumbers;

	while (Q--) {
		string op;
		cin >> op;

		if (op == "add") {
			int num;
			cin >> num;
			productOfKNumbers.add(num);
		}
		else {
			int k;
			cin >> k;

			cout << productOfKNumbers.getProduct(k) << "\n";
		}
	}

	return 0;
}