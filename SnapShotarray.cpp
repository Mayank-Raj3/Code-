#include <bits/stdc++.h>
using namespace std;

class LFUCache {
public:
	int capacity , size , lfu = 0  ;
	unordered_map<int , list<int>> keys ; // key -- > dll
	unordered_map<int , pair<int, int>> values ; // {key , {val , freq}}
	unordered_map<int , list<int>::iterator> iters ; // key --> iterator

	void update(int key) {
		int freq = values[key].second;
		auto itr  = iters[key];
		values[key].second++;
		keys[freq].erase(itr);
		keys[freq + 1].push_back(key);
		iters[key] = prev(keys[freq + 1].end());
		if (keys[lfu].empty()) {
			lfu++;
		}
	}

	LFUCache(int n) {
		capacity = n;
		size = 0 ;
	}

	int get(int key) {
		if (values.find(key) == values.end()) {

			return -1 ;
		}
		update(key);
		return values[key].first;
	}

	void put(int key, int value) {
		if (!capacity) {
			return ;
		}
		if (values.find(key) != values.end()) {
			values[key].first = value;
			update(key);
		} else {
			if (size == capacity) {
				int evict = keys[lfu].front();
				keys[lfu].pop_front();
				values.erase(evict);
				iters.erase(evict);
			} else  {
				size++;
			}
			values[key] = {value, 1};
			keys[1].push_back(key);
			iters[key] = --keys[1].end();
			lfu = 1 ;
		}

	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, q;
	cin >> n >> q;
	LFUCache* obj = new LFUCache(n);
	while (q--) {
		string op;
		cin >> op;
		if (op == "get") {
			int key;
			cin >> key;
			cout << obj->get(key) << "\n";
		}
		else if (op == "put") {
			int key, value;
			cin >> key >> value;
			obj->put(key, value);
		}
	}
}