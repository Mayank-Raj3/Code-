// Follow the steps given below to implement the approach:

// Create two variables, start=0, currentSum = arr[0]
// Traverse the array from index 1 to end.
// Update the variable currentSum by adding current element, currentSum = currentSum + arr[i]
// If the currentSum is greater than the given sum,
// update the variable currentSum as currentSum = currentSum – arr[start],
// and update start as, start++.
// If the currentSum is equal to given sum, print the subarray and break the loop.
//  Below is the implementation of the above approach.

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n ; cin >> n ;
    int sum ; cin >> sum;
    int arr[n];
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }

    int cursum = arr[0];
    int start = 0 ;
    for (int i = 1 ; i < n ; i++) {
        while (cursum > sum and start < i - 1) {
            cursum -= arr[sum];
            start++;
            // reducing and increaseing index
        }

        if (cursum == sum) {
            cout << start << " " << i - 1;
            return 0;

        }
        if (i < n)
            cursum += arr[i];


    }


    // If we reach here, then no subarray
    cout << "No subarray found";
    return 0;
}
