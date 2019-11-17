#include "bits/stdc++.h"
using namespace std;

int main()
{
  int seq[129] = {-1};
  seq[0] = 0;
  seq[1] = 0;
  seq[2] = 1;
  unordered_map<int, int> umap;
  umap[0] = 2;
  umap[1] = 1;
  for (int i = 3; i < 129; i++)
  {
    if (umap[seq[i - 1]] == 1)
    {
      seq[i] = 0;
      umap[0]++;
    }
    else
    {
      for (int j = i - 1; j >= 0; j--)
      {
        if (seq[i - 1] == seq[j] && j < i - 1)
        {
          seq[i] = i - 1 - j;
          umap[seq[i]]++;
          break;
        }
      }
    }
  }

  // for (auto c : seq)
  //   cout << c << " ";

  int t;
  cin >> t;
  while (t--)
  {
    int n, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      if (seq[i] == seq[n - 1])
        c++;
    }
    cout << c << "\n";
  }

  return 0;
}
