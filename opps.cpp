
#include<bits/stdc++.h>
using namespace std;
class Employee {
public:
	string Name;
	string Company ;
	int Age ;

	void IntroduceYS() {
		cout << "Name : " << Name << endl;
		cout << "Company : " << Company << endl;
		cout << "Age : " << Age << endl;

	}
	// modyfing default constructor
	Employee(string name , string xompany , int age ) {
		Name = name ;
		Company = xompany;
		Age = age ;

	}
};
int32_t main() {
	// class_name Object name ;

	// Employee  em1 ;
	Employee  em2 = Employee("Mayank " , "Apple", 19); // with  construcotr


	// em1.Name = "Mayank";
	// em1.Company = "Apple";
	// em1.Name = "19";
	em2.IntroduceYS(); // default constrctor is provoked everytime me call introduce;


}



/* -----------------END OF PROGRAM --------------------*/

