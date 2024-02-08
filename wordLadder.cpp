#include <bits/stdc++.h>
using namespace std;

class WordLadder
{
public:


	map < string, vector< string>> mpp ;
	int ans = 1e9 ;

	map<string, int> vis;

	int getMinMoves(string beginWord, string endWord, vector<string>& wordList) {
		unordered_map<string, bool>vis;
		for (auto it : wordList)
			vis[it] = 0;

		int ans = 0;
		queue<string>q;
		q.push(beginWord);

		while (!q.empty())
		{
			int n = q.size();
			for (int p = 0; p < n; p++)
			{
				string cur = q.front();
				if (cur == endWord)
					return ans + 1;


				q.pop();
				for (int i = 0; i < cur.size(); i++)
				{
					for (char j = 'a'; j <= 'z'; j++)
					{
						string temp = cur;
						temp[i] = j;
						if (vis.find(temp) != vis.end() && vis[temp] == 0)
						{
							q.push(temp);
							vis[temp] = 1;
						}
					}
				}

			}
			ans++;
		}
		return 0;
	}

};


int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<string> dictionary;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		dictionary.push_back(s);
	}

	string beginWord, endWord;
	cin >> beginWord >> endWord;

	WordLadder wordLadder;

	cout << wordLadder.getMinMoves(beginWord, endWord, dictionary) << "\n";

	return 0;
}