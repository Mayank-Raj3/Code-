void solve() {
	int n = 10 ;
	int mid = 3 ;
	int i = 0 , j = 0 ;
	while (j < n) {
		if (j - i + 1 < mid)
			j++;
		else if (j - i + 1 == mid) {
			cout << j << " " << i << endl;
			i++, j++;
		}
	}


	cout << mid - 1 << " " << 0 << endl;
	for (int i = mid ; i < n ; i++) {
		cout << i << " " <<  i - mid + 1 << endl;
	}


}
