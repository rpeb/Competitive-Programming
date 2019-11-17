#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int f = s.length() - 1;
    for (int i = 0; i < s.length() - 1; i++)
    {
      if (s[i] > s[i + 1])
      {
        f = i;
        break;
      }
    }
    int ans = 0, c = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
      if (i != f)
      {
        ans += (int)((s[i] - 48) * pow(10, c));
        c++;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}