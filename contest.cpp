class Solution {
public:
	int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
		sort(nums1.begin(), nums1.end());
		sort(nums2.begin(), nums2.end());

		int min_diff = 1e9;
		int min_diff1 = 1e9;
		for (int i = 0; i < nums1.size(); ++i) {
			for (int j = 0; j < nums2.size(); ++j) {
				if (nums1[i] != nums2[j]) {
					int diff = nums1[i] - nums2[j] ;
					if (diff < 0) {
						min_diff1 = -min(min_diff1, abs(diff));
					}
					min_diff = min(min_diff, abs(diff));

				}
			}
		}

		return min_diff1 != 1e9 ? min_diff1 : min_diff;
	}
};