#include <iostream>
using namespace std;

void subArraySum(int arr[], int n, int sum)
{

	int currentSum = arr[0], start = 0, i, cnt = 0;


	for (i = 1; i <= n; i++) {
		while (currentSum > sum ) { //jaise sum se bada ho rha tabi catelpillar ki trh short karenge array
			currentSum = currentSum - arr[start]; //increaseing start and removing arr[start]
			start++;
		}

		if (currentSum == sum) {
			cnt++;
		}


		currentSum = currentSum + arr[i];
	}

	cout << cnt;


}

int main() {
	int n , x ; cin >> n >> x;
	int arr[n];
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	subArraySum(arr, n, x);
}