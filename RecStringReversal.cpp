#include <bits/stdc++.h>
using namespace std;

void reverse(string str)
{
	if (str.size() == 0)
	{
		return;
	}
	cout << str << endl;
	reverse(str.substr(1));

	cout << str[0];
}
int main()
{
	string a = "Mayank";
	reverse(a);
	return 0;
}
/*Mayank
ayank
yank
ank
nk
k

k n a y a
knayaM*/
