#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> s;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      s.push_back(x);
    }
    for (int i = 0; i < n - 1; i++)
    {
      s[n] = s[n] | s[i];
    }
    // cout << c << "\n";
    cout << __popcntd(s[n]) << "\n";
  }

  return 0;
}