class Solution {
public:

	int numberOfPairs(vector<vector<int>>& points) {
		int cnt = 0 ;

		for (int i = 0 ; i < points.size(); i ++) {
			for (int j = 0 ; j < points.size(); j ++) {
				if (i != j and points[i][0] <= points[j][0] and  points[i][1] >= points[j][1]) {
					int f = 0 ;
					for (int k = 0 ; k <  points.size(); k++) {
						if ((i != k and  j != k) and points[k][0] >= points[i][0] and points[k][0] <= points[j][0] and points[k][1] <= points[i][1] and points[k][1] >= points[j][1]) {
							f = 1;
							break;
						}
					}

					if (!f) {
						cnt++;
					}
				}
			}
		}


		return cnt ;

	}
};