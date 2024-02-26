#include <iostream>
using namespace std;


bool is_sorted(int a[], int size) {
	if (size == 0 || size == 1) {
		return true;
	}

	if (a[0] > a[1]) {
		return false;
	}

	return is_sorted(a + 1, size - 1);

}

int main() {
	int n = 3;
	int arr[n] = {1, 2,  3};

	if (is_sorted(arr, n)) {
		cout << "sorted";
	}
	else cout << "Not sorted";

}
