
// video link :- https://youtu.be/dAVF2NpC3j4

class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        int prevsmaller[n];
        stack<int> st;

        for (int i = 0 ; i < n ; i++) {
            while (st.size() != 0 and arr[st.top()] >= arr[i])
                st.pop();
            if (st.size() == 0) {
                prevsmaller[i] = 0;
            } else {
                prevsmaller[i] = st.top() + 1;
            }
            st.push(i);
        }
        while (!st.empty())
            st.pop();

        int rigthsmaller[n];
        for (int i = n - 1 ; i >= 0 ; i--) {
            while (st.size() != 0 and arr[st.top()] >= arr[i])
                st.pop();
            if (st.size() == 0) {
                rigthsmaller[i] = n - 1;
            } else {
                rigthsmaller[i] = st.top() - 1;
            }
            st.push(i);
        }
        int maxi = -100000;
        for (int i = 0 ; i < n ; i++) {
            maxi = max(maxi, ((rigthsmaller[i] - prevsmaller[i] + 1 ) * arr[i] ));
        }
        return maxi;
    }
    int maximalRectangle(vector<vector<char>>& arr) {
        int n = arr.size(), m = arr[0].size();
        vector<vector<int>> dp(n, vector<int>(m, 0));
        int area = 0 ;
        for (int i = 0 ; i < n; i++) {
            for (int j = 0 ; j < m ; j ++) {
                if (i == 0) {
                    dp[i][j] = arr[i][j] - '0';
                } else if (i != 0 and arr[i][j] == '1') {
                    dp[i][j] += dp[i - 1][j] + 1;
                }
            }
            area = max(area, largestRectangleArea(dp[i]));
        }
        return area ;
    }
};