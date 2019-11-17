#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    set<string> se;
    pair<string, int> p;
    map<pair<string, int>, int> m;
    while (n--)
    {
      string s;
      int z;
      cin >> s >> z;
      se.insert(s);
      p = make_pair(s, z);
      m[p]++;
    }
    int ans = 0;
    for (auto it : se)
    {
      pair<string, int> p1, p2;
      p1 = make_pair(it, 0);
      p2 = make_pair(it, 1);
      if (m[p1] > m[p2])
        ans += m[p1];
      else
        ans += m[p2];
    }
    cout << ans << "\n";
  }
  return 0;
}