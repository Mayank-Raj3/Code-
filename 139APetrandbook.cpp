#include <iostream>
using namespace std;
int main()
{
	int page, arr[10], i;
	cin >> page;
	for (i = 0; i < 7; i++) {
		cin >> arr[i]; //days ka input leliya
	}
	for (i = 0; i < 7; i++) {
		page -= arr[i]; // har din minus kar rhe
		if (page <= 0) {  // page khatam ho gyaa tho i+1
			cout << i + 1 << endl;
			break;
		}
		if (i == 6) //agr i 6 k eaual ho gya tho next week
			i = -1;// isliye -1  agle loop mea -1+1 ho jayega i++ k karan
	}
	return 0;  //kal review ;
}
