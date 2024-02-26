
//we have integers like int double char ................;
#include <bits/stdc++.h>
using namespace std;

struct node {
	string str;
	int num;
	double doub;
	char x;

	// node(str_, num_, doub_, x_) { //this is constructor
	// str = str_;
	// num = num_;
	// doub = doub_;
	// x = x_;
	// }
};

int main() {

	// int
	// double
	// char


	// create a data type where you store
	// {string, int, double, char}


	// wrong way of defining
	node raj;
	raj.str = "striver";
	raj.num = 79;
	raj.doub = 91.0;

	// node raj =  node("striver", 79, 91.0, ""); //this is using constructor

	cout << raj.str << " " << raj.num << endl;//striver 79

}


