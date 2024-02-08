#define ll long long int

class MyStructure {
private:
    multiset<int> topK, temp;
    ll sum;
    int K;

public:
    MyStructure(int K) : K(K), sum(0LL) {};

    void add(int x) {
        topK.insert(x);
        sum += x;
        if ((int)topK.size() > K) {
            int y = *(topK.rbegin());
            topK.erase(topK.find(y));
            sum -= y;
            temp.insert(y);
        }
        return;
    }

    void remove(int x) {
        if (temp.find(x) != temp.end()) {
            temp.erase(temp.find(x));
        }
        else if (topK.find(x) != topK.end()) {
            sum -= x;
            topK.erase(topK.find(x));
            if (temp.empty()) return;
            int y = *(temp.begin());
            sum += y;
            topK.insert(y);
            temp.erase(temp.find(y));
        }
        return;
    }

    ll getSum() {
        return sum;
    }

    ll getSize() {
        return topK.size() + temp.size();
    }
};



class Solution {
public:

    long long minimumCost(vector<int>& nums, int k, int dist) {
        ll ans = LLONG_MAX;
        int n = nums.size();
        MyStructure win(k - 2);

        for (int i = 1; i < n; i++) {
            if (win.getSize() >= k - 2) {
                ans = min(ans, nums[0] + nums[i] + win.getSum());
            }
            win.add(nums[i]);
            if (i - dist >= 1)win.remove(nums[i - dist]);
        }

        return ans;

    }
};