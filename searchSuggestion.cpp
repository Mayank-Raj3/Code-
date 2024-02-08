#include <bits/stdc++.h>
using namespace std;



class SearchSuggestionSystem
{
public:

	multiset<string> ms;

	SearchSuggestionSystem(vector<string> products)
	{

		for (auto it : products) ms.insert(it);

	}

	vector<string> suggestProducts(string s)
	{
		string tempS = "";
		vector<string> temp;
		auto it = ms.lower_bound(tempS);

		if (it != ms.end() and (*it).substr(0, tempS.size()) == tempS)
			temp.push_back(*it), it++;

		if (it != ms.end() and (*it).substr(0, tempS.size()) == tempS)
			temp.push_back(*it), it++;


		if (it != ms.end() and (*it).substr(0, tempS.size()) == tempS)
			temp.push_back(*it), it++;

		return temp;


	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	vector<string> products;

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		products.push_back(s);
	}

	SearchSuggestionSystem searchSuggestionSystem(products);

	int q;
	cin >> q;

	while (q--)
	{
		string searchWord;
		cin >> searchWord;

		vector<string> ans = searchSuggestionSystem.suggestProducts(searchWord);

		for (string s : ans)
			cout << s << " ";
		cout << "\n";
	}

	return 0;
}