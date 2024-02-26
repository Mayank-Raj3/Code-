#include<bits/stdc++.h>
using namespace std;
int largestblock(vector<char> arr, int n)
{
	stack<int> result;
	int top_val;
	int max_area = 0;
	int area = 0;
	int i = 0;
	while (i < n) {
		if (result.empty() || arr[result.top()] - '0' <= arr[i] - '0')
			result.push(i++);

		else {
			top_val = arr[result.top()] - '0';
			result.pop();
			area = top_val * i;

			if (!result.empty())
				area = top_val * (i - result.top() - 1);
			max_area = max(area, max_area);
		}
	}
	while (!result.empty()) {
		top_val = arr[result.top()] - '0';
		result.pop();
		area = top_val * i;
		if (!result.empty())
			area = top_val * (i - result.top() - 1);

		max_area = max(area, max_area);
	}
	return max_area;
}

int maximalractangle(vector<vector<char>> matrix , int n , int m)
{
	int res = largestblock(matrix[0], m);

	for (int i = 1; i < n; i++) {

		for (int j = 0; j < m; j++)
			if (matrix[i][j])
				matrix[i][j] += matrix[i - 1][j];

		res = max(res, largestblock(matrix[i], m));
	}
	return res;
}
int main() {
	int n , m ;
	cin >> n >> m ;
	vector<vector<char>> matrix(n, vector<char> (m) );
	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < m ; j++) {
			cin >> matrix[i][j];
		}
	}

	cout << maximalractangle(matrix, n, m);


// https://leetcode.com/problems/maximal-rectangle/description/
	not done properly


}

