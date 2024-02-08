#include <bits/stdc++.h>
using namespace std;

class FindPairswithSum
{
public:
	map<int, int> mpp;
	vector<int> arr , brr ;
	FindPairswithSum(vector<int> &A, vector<int> &B)
	{
		arr = A ;
		brr = B;

		for (auto it : B) {
			mpp[it]++;
		}
	}
	void add(int index, int val)
	{
		mpp[brr[index]]--;
		brr[index] += val;
		mpp[brr[index] ]++;
	}

	int count(int total)
	{
		int cnt = 0 ;
		for (auto it : arr) {
			cnt += (mpp[total - it ]);
		}
		return cnt ;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, q;
	cin >> n >> m >> q;

	vector<int> A(n), B(m);

	for (auto &i : A)
	{
		cin >> i;
	}

	for (auto &i : B)
	{
		cin >> i;
	}

	FindPairswithSum *obj = new FindPairswithSum(A, B);

	for (int i = 0; i < q; i++)
	{
		string op;
		cin >> op;
		if (op == "add")
		{
			int index, val;
			cin >> index >> val;
			obj->add(index, val);
		}
		else
		{
			int total;
			cin >> total;
			cout << obj->count(total) << '\n';
		}
	}

	return 0;
}