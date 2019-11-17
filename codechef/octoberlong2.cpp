#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		vector<int> v;
		int n, m, q, to, c = 0, j = 0;
		cin >> n >> m >> q;
		while(q--)
		{
			cin >> to;
			v.push_back(to);
			cin >> to;
			v.push_back(to);
		}
		for (int i = 0; i < v.size(); i++)
		{
			if(count(v.begin(), v.end(), v[i]) % 2 == 0) {
			c++;
			v[i]=j--;
			}
		}
		cout << c << "\n";
	}
}
