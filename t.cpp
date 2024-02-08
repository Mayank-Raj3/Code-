class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        vector<long long> pref;
        int n = nums.size();
        vector<pair<long long, long long>> arr;

        for (int i = 0; i < n; i++) {
            pref.push_back(nums[i]);
            arr.push_back({ nums[i], i });
        }

        for (int i = 0; i < n; i++) {
            if (i)
                pref[i] += pref[i - 1];
        }

        sort(arr.begin(), arr.end());

        long long sum = LLONG_MIN;
        long long inf = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            long long x = arr[i].first + k;
            long long y = arr[i].first - k;

            pair<long long, long long> a = { x, inf };
            pair<long long, long long> b = { y, inf };

            auto it1 = upper_bound(arr.begin(), arr.end(), a);
            auto it2 = upper_bound(arr.begin(), arr.end(), b);

            if (it1 != arr.begin())
                it1--;

            if (it2 != arr.begin())
                it2--;

            if (it1 != arr.end() &&  it1->first == x) {
                int ii = it1->second;
                int jj = arr[i].second;

                int s = max(ii, jj);
                int f = min(ii, jj);
                if (f == 0) {
                    sum = max(sum, pref[s]);
                } else {
                    sum = max(sum, pref[s] - pref[f - 1]);
                }
            }

            if (it2 != arr.end() &&  it2->first == y) {
                int ii = it2->second;
                int jj = arr[i].second;

                int s = max(ii, jj);
                int f = min(ii, jj);
                if (f == 0) {
                    sum = max(sum, pref[s]);
                } else {
                    sum = max(sum, pref[s] - pref[f - 1]);
                }
            }
        }

        return (sum == LLONG_MIN) ? 0 : sum;
    }
};