#include<bits/stdc++.h>
using namespace std;

char ch[10001];

int amt[30];
int tot;
int count_odd = 0;

int main()
{
	cin >> ch;

	int L = strlen(ch);
	for (int i = 0; i < L; i++)
	{
		amt[ch[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (amt[i] % 2 == 1) count_odd++;

	}
	if (count_odd == 0)
	{
		cout << ("First\n");
		return 0;
	}
	if (count_odd == 1)
	{
		cout << ("First\n");
		return 0;
	}
	if (count_odd % 2 == 0)
	{
		cout << ("Second\n");
		return 0;
	}
	cout << ("First\n");
	return 0;
}