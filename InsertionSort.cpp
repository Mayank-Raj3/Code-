#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
void insertion(int n , int arr[]) {
	for (int i = 1 ; i < n  ; i++) {
		int x = arr[i];
		int j = i - 1;
		cout << i << " " << j << nline;
		while (j > -1 && arr[j] > x ) {
			cout << arr[j + 1] << " " << arr[j] << nline;

			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = x;
	}
}
int main() {
	int n = 5;
	int arr[] = {2, 3543, 2, 332, 65};
	insertion(n, arr);
	for (int i = 0 ; i < n ; i++) {
		cout << arr[i] << " ";
	}

}