#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int max_profit(int N, int K, vector<int>& cost, vector<int>& sell) {
	int maxi = *max_element(cost.begin(), cost.end()) + K;

	vector<int> dp(maxi + 1, -1e9);

	dp[K] = 0;

	for (int i = 0; i < N; ++i) {
		int c = cost[i];
		int s = sell[i];
		for (int money = maxi; money >= c; --money) {
			if (dp[money] != -1e9) {
				dp[money - c + s] = max(dp[money - c + s], dp[money] + (s - c));
			}
		}
	}

	int max_profit = 0;
	for (int money = 0; money <= maxi; ++money) {
		max_profit = max(max_profit, dp[money]);
	}

	return max_profit;
}

int main() {
	int N = 4; // Number of items
	int K = 10; // Initial amount of money
	vector<int> cost = {8, 4, 6, 2}; // Cost of each item
	vector<int> sell = {12, 5, 7, 3}; // Selling price of each item

	int result = max_profit(N, K, cost, sell);
	cout << "The maximum profit John can achieve is: " << result << endl;

	return 0;
}
