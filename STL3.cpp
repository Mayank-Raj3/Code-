#include <bits/stdc++.h>
using namespace std;
array <int , 3 > arr0;//{0,0,0} //outside main we get 0000 matrix


// max size of 10^7 -> int, double, char
int arr6[10000000];

// max size of 10^8 -> bool
bool arr7[100000000];



int main() {

// Syntax:                    array<object_type, arr_size> arr_name;





	array <int , 3> arr0;//-----> gives {?,?,?} if we decrale it inside main we get garbage value matrix
	for (int i = 0; i < 3; i++) {
		cout << arr0.at(i) << " ";
	}
	cout << endl;

	for (int i = 0; i < 3; i++) {
		cout << arr0.at(i) << " ";
	}
	cout << endl;

	array <int , 5 > arr2 = {0}; //gives only 00000 array ;
	for (int i = 0; i < 5; i++) {
		cout << arr2.at(i) << " ";  //array_name.at(index ) gives the element at index i
	}
	cout << endl;
//array_name.fill(0) it will fill whole array with 0 0 0 ;
//array_name.fill(1) it will fill whole array with 1 1 1 ;


	// max size of 10^6 -> int, double, char
	int arr5[1000000];


	// max size of 10^7 -> bool
	bool arr4[10000000];



//                      "rend "  1       2    3    4   " end"
	// iterators                begin()
	// begin(),     end(),                        rbegin(),       rend()
	// first index ,  after the last element , last element  , before first index
	//

	array<int, 5> arr = {1, 3, 4, 5, 6};


	for (auto it = arr.begin(); it != arr.end(); it++) {
		cout << *it << " ";
	}



	for (auto it = arr.rbegin(); it > arr.rend(); it++) {
		cout << *it << " ";
	}


// it will give the adress and will iterate from the end elemet to the first element
	for (auto it = arr.end() - 1; it >= arr.begin(); it--) {
		cout << *it << " "; // * is to return value at that adress
	}

	// for each loop
	for (auto it : arr) {
		cout << it << " ";
	}

	string s = "xhegcwe";
	// x h e g c w e
	for (auto c : s) {
		cout << c << " ";
	}


	// size
	cout << arr.size();

	// front
	cout << arr.front(); // arr.at(0);

	// back
	cout << arr.back(); // arr.at(arr.size() - 1);













}



