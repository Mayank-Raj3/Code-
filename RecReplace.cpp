#include<bits/stdc++.h>
using namespace std;
void len(char str[], char a , char b) {
	if (str[0] == '\0') {
		return ;
	}
	else {
		if (str[0] == a) {
			str[0] = b;
		}
	}
	return len(str + 1 , a, b);

}
int main() {
	char str[100];
	char a, b;
	cin >> str >> a >> b;
	len(str, a, b);
	cout << str;
}