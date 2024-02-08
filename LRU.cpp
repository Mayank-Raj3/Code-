#include <bits/stdc++.h>
using namespace std;


#define ff first ;

class LRUCache
{
public:
    //

    //  key (used , u2 ,...... lru )
    list<int> order ;

    // key : {value , pointer }
    unordered_map<int , pair<int, list<int>:: iterator>> cache ;

    int maxs = 0 ;

    void touch(int key ) {
        // if we used get or put
        auto it = cache.find(key);
        int k = it->ff;
        order.erase(it->second.second);
        order.push_front(key);
        it->second.second = order.begin();
    }

    LRUCache(int capacity)
    {
        maxs = capacity;
        order.clear();
        cache.clear();
    }

    int get(int key)
    {
        if (cache.find(key) == cache.end()) {
            return -1 ;
        } else {
            touch(key);
            return cache[key].first;
        }
    }

    void put(int key, int value)
    {
        if (cache.find(key) != cache.end()) {
            touch(key);
        } else {
            if (cache.size() == maxs) {
                cache.erase(order.back());
                order.pop_back();
            }
            order.push_front(key);
        }
        cache[key] = {value, order.begin()};

    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int q, cap;
    cin >> q >> cap;
    LRUCache *obj = new LRUCache(cap);
    for (int i = 0; i < q; i++)
    {
        string op;
        cin >> op;
        if (op == "get")
        {
            int key;
            cin >> key;
            cout << obj->get(key) << '\n';
        }
        else
        {
            int key, val;
            cin >> key >> val;
            obj->put(key, val);
        }
    }

    return 0;
}