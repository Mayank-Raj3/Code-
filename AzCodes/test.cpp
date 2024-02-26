class Solution {
public:
	int minAbsoluteDifference(vector<int>& nums, int x) {
		set<int> st;
		int mini  = INT_MAX;
		int n = nums.size();
		for (int i = x; i < n; i++) {
			st.insert(nums[i - x]);
			auto it = st.upper_bound(nums[i]);

			if (it != st.end()) {
				mini  = min(mini , abs(*it - nums[i]));
				if (it != st.begin())
					mini  = min(mini , abs(*prev(it) - nums[i]));
			}
		}
		return ans;

	}
};