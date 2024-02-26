#include<bits/stdc++.h>
using namespace std;
//name space is basically scope ;
//
namespace raj {
int val = 50 ;
int getval() {
	return val * 50 ;
}
}

int main() {
	double val = 10.00;
	cout << val << endl; //prints 10.0
	//it can also be written as
	//std::cout<< val << endl;
	// but we cant write it all the time so use write using namespace std;

	cout << raj::val << endl; //prints 50 // takes value of 50 from raj scope ;
	cout << raj::getval() << endl;


}

//we have integers like int double char ................;

