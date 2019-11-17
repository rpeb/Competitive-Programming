#include "comp.h"

int fac[] = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

int main()
{
  ll sum = 0, summ = 0, j = 0;
  for (ll i = 1; i < 200; i++)
  {
    sum = 0;
    j = i;
    while (i)
    {
      sum += fac[i % 10 - 1];
      i /= 10;
    }
    if (sum == j)
      summ += sum;
  }
  cout << summ << "\n";

  return 0;
}