class TopK {
private:
    multiset<long long> topK, temp;
    int k;
    long long sumOftopk;

public:
    TopK(int k) {
        this->k = k;
        this->sumOftopk = 0;
    }

    void add(long long x) {
        if (topK.size() < k) {
            topK.insert(x);
            sumOftopk += x;
        } else {
            long long fr = *topK.begin();
            if (x > fr) {
                sumOftopk -= fr;
                sumOftopk += x;
                topK.erase(topK.begin());
                topK.insert(x);
                temp.insert(fr);
            } else {
                temp.insert(x);
            }
        }
    }

    void remove(long long x) {
        if (temp.find(x) != temp.end()) {
            temp.erase(temp.find(x));
        } else {
            if (topK.find(x) != topK.end()) {
                topK.erase(topK.find(x));
                sumOftopk -= x;

                if (!temp.empty()) {
                    long long lar = *temp.rbegin();
                    sumOftopk += lar;
                    topK.insert(lar);
                    temp.erase(temp.find(*temp.rbegin()));
                }
            }
        }
    }

    long long getTopK() {
        return sumOftopk;
    }
};

class SmallK {
private:
    multiset<long long> smallK, temp;
    int k;
    long long sumOfsmallk;

public:
    SmallK(int k) {
        this->k = k;
        this->sumOfsmallk = 0;
    }

    void add(long long x) {
        if (smallK.size() < k) {
            smallK.insert(x);
            sumOfsmallk += x;
        } else {
            long long fr = *smallK.rbegin();
            if (x < fr) {
                sumOfsmallk -= fr;
                sumOfsmallk += x;
                smallK.erase(prev(smallK.end()));
                smallK.insert(x);
                temp.insert(fr);
            } else {
                temp.insert(x);
            }
        }
    }

    void remove(long long x) {
        if (temp.find(x) != temp.end()) {
            temp.erase(temp.find(x));
        } else {
            if (smallK.find(x) != smallK.end()) {
                smallK.erase(smallK.find(x));
                sumOfsmallk -= x;

                if (!temp.empty()) {
                    long long lar = *temp.begin();
                    sumOfsmallk += lar;
                    smallK.insert(lar);
                    temp.erase(temp.find(*temp.begin()));
                }
            }
        }
    }

    long long getSmallK() {
        return sumOfsmallk;
    }
};

class MKAverage {
private:
    TopK t;
    SmallK s;
    int m;
    int k;
    long long sum = 0;
    deque<long long> d;

public:
    MKAverage(int mm, int kk) : t(kk), s(kk) {
        m = mm;
        k = kk;
    }

    void addElement(long long num) {
        if (d.size() >= m) {
            long long re = d.front();
            sum -= re;
            t.remove(re);
            s.remove(re);
            d.pop_front();
        }
        sum += num;
        d.push_back(num);
        t.add(num);
        s.add(num);
    }

    long long calculateMKAverage() {
        if (d.size() < m)
            return -1;
        else
            return (sum - (t.getTopK() + s.getSmallK())) / (m - (2 * k));
    }
};
