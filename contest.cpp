
#define ll long long
class Solution {
public:
	int maximumLength(vector<int>& nums) {
		map<ll, ll> mpp;
		set<ll> st(nums.begin(), nums.end());
		for (auto it : nums) {
			mpp[it]++;
		}
		map<ll, vector<ll>> ans;
		for (auto it : st) {
			if (it != 1) {
				for (ll i = 0; i < 5; i++) {
					long long ll powerResult = static_cast<long long ll>(powl(it * 1ll, (1ll << i)));
					if (st.find(powerResult * 1ll) != st.end()) {
						if (mpp[powerResult] >= 2)
							ans[it].push_back(2);
						else {
							ans[it].push_back(1);
						}
					} else {
						break;
					}
				}
			}
		}

		if (st.find(1) != st.end()) {
			ans[1].push_back(1);
		}

		ll cn = 1;
		for (auto it : ans) {
			ll cnt = 0;
			for (ll i = 0; i < it.second.size(); i++) {
				if (it.second[i] == 1) {
					cnt++;
					break;
				} else {
					cnt++;
				}
			}
			cn = max(cn, cnt);
		}

		if (mpp[1] % 2 == 0) {
			mpp[1]--;
		}

		if (mpp[1] > ((cn - 1) * 2 + 1)) {
			return mpp[1];
		}
		return cn == 1 ? 1 : ((cn - 1) * 2 + 1);
	}
};
