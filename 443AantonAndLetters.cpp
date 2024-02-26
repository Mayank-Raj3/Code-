
#include <bits/stdc++.h>
using namespace std;

int main()
{
	char str[1005];
	gets(str);  //taking input of the string ;
	int length = strlen(str);
	char str2[1005];
	int j = 0;
	for (int i = 0 ; i < length ; i++ ) {
		if (islower(str[i])) {
			str2[j] = str[i];
			j++;
		}
	}



	int length2 = j;




}




