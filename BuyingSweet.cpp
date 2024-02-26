#include <bits/stdc++.h>
using namespace std;
int
main ()
{
  int t;
  cin >> t;
  while (t--)
  {

    int n, sum = 0, last, remain;
    scanf("%d", &n);
    while (n > 0)
    {
      last = n % 10;
      sum = sum + last;
      n = n / 10;
    }
    printf(" %d \n", sum);


  }
}

// 3
// 12345
// 31203
// 2123
