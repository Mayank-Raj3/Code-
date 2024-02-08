#include <bits/stdc++.h>
using namespace std;
class WordDictionary {
public:
	vector<string> arr;
	WordDictionary() {
		arr.clear();
	}

	void addWord(string word) {
		arr.push_back(word);
	}
	bool search(string word) {

		for (auto it : arr) {
			if (it.size() == word.size()) {
				bool f = true;
				for (int i = 0 ; i < it.size() ; i++) {
					if (it[i] == word[i] or word[i] == '.') {
						continue;
					} else {
						f = false;
					}
				}
				if (f) {
					return true ;
				}
			}
		}
		return false ;
	}

};
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	WordDictionary* obj = new WordDictionary();

	int q;
	cin >> q;

	while (q--) {

		string op;
		cin >> op;

		if (op == "add") {
			string word;
			cin >> word;
			obj->addWord(word);
		}

		else {
			string word;
			cin >> word;
			if (obj->search(word))
				cout << "Yes\n";
			else
				cout << "No\n";
		}
	}
}