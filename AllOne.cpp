#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

class AllOne {
public:
	map<string, int> freq;
	map<int, set<string>> storr;

	AllOne() {

	}

	void inc(string key) {
		if (freq.find(key) != freq.end()) {
			int prev = freq[key];
			storr[prev].erase(key);
			if (storr[prev].empty())
				storr.erase(prev);
		}

		freq[key]++;
		int val = freq[key];
		storr[val].insert(key);
	}

	void dec(string key) {

		if (freq.find(key) != freq.end()) {
			int prev = freq[key];
			storr[prev].erase(key);
			if (storr[prev].empty()) storr.erase(prev);
		}

		freq[key]--;

		int val = freq[key];
		if (!val) freq.erase(key);
		else storr[val].insert(key);
	}

	string getMaxKey() {
		if (freq.empty()) return "";

		int maxi = (storr.rbegin())->first;
		return (*storr[maxi].rbegin());
	}

	string getMinKey() {
		if (freq.empty()) return "";

		int mini = storr.begin()->first;
		return (*storr[mini].rbegin());
	}
};


int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	int Q;
	cin >> Q;

	AllOne allOne;

	while (Q--) {
		string op;
		cin >> op;

		if (op == "inc") {
			string key;
			cin >> key;

			allOne.inc(key);
		} else if (op == "dec") {
			string key;
			cin >> key;

			allOne.dec(key);
		} else if (op == "getMaxKey") {
			cout << allOne.getMaxKey() << "\n";
		} else if (op == "getMinKey") {
			cout << allOne.getMinKey() << "\n";
		}
	}

	return 0;
}
