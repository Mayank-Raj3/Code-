#include<bits/stdc++.h>
using namespace std;
#define N 101 //no of column
int arr[N][N], I[N][N];

void mul(int A[][N], int B[][N], int dim) {
	int res[dim + 1][dim + 1];

	for (int i = 1 ; i <= dim ; i++) {
		for (int j = 1 ; j <= dim ; j++) {
			res[i][j] = 0;
			for (int k = 1; k <= dim; k++ ) {
				res[i][j] += A[i][k] * B[k][j];
			}
		}

		for (int i = 1 ; i <= dim ; i++) {
			for (int j = 1 ; j <= dim ; j++) {
				A[i][j] = res[i][j];
			}
		}
	}


}





//           arr      order     power
void power(int A[][N], int dim , int n) {
	// we need to claculate arr[])^n
	//makin indentity matrix;
	for (int i = 1 ; i <= dim; i++) {
		for (int j = 1 ; j <= dim ; j++) {
			if (i == j) {
				I[i][j] = 1;
			}
			else I[i][j] = 0;
		}
	}

	//multiplying mateices
	for (int i = 0 ; i < n ; i++) {
		mul(I, A, dim);
	}

	for (int i = 1 ; i <= dim; i++) {
		for (int j = 1 ; j <= dim ; j++) {
			A[i][j] = I[i][j];
		}
	}



}


void printmat(int arr[][N], int dim) {
	for (int i = 1 ; i <= dim; i++) {
		for (int j = 1 ; j <= dim ; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

}

int main() {
	int t, dim, n ;
	//dim dimensiom or order of matrix;
	//n= power
	cin >> t;
	while (t--) {
		cin >> dim >> n;

		for (int i = 1 ; i <= dim; i++) {
			for (int j = 1 ; j <= dim ; j++) {
				cin >> arr[i][j];
			}
		}

		power(arr, dim, n);
		printmat(arr, dim);

	}
}