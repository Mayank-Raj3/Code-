//      .....All...copyright....Mynk28nov.........;
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define ld long double
#define nline "\n"

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int ar[(int)1e6 + 10];
set<int> tprime;
// t prime  - prime number k square he hinge


void t_primes()
{
	tprime.insert(4);//since 2 is only even prime number;
	for (int i = 3; i < (int)1e6 + 1; i += 2) //skiping multiple of 2

	{
		if (ar[i] == 0)
		{
			tprime.insert(i * i);
			for (int j = i; j <= 1e6; j += i)
			{
				ar[j] = 1; // multiple of i ko 1 mark kar rhe
			}
		}
	}
}

int32_t main()

{
	int n; cin >> n;
	t_primes(); //pre compute
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		if (tprime.find(x) != tprime.end()) //agr mila tho ha ;
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
	return 0;
}