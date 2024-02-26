#include <iostream>
using namespace std;
string a, b = "hello"; // ik string leliya hello ab compare karunga har k char
int j = 0, pas = 0;
int main() {							//h e l l o
	cin >> a;							//0 1 2 3 4
	for (int i = 0; i < a.size(); i++) {
		//h l e l o
		if (a[i] == b[j]) {//              0 1 2 3 4 5 6 7 8 9 10 11
			j++;  // 1
			pas++;// 1

			if (pas == 5) {
				break;
			}
		}
	}
	// cout << pas << endl;
	if (pas == 5) {
		cout << "YES";
	} else {
		cout << "NO";
	}
}