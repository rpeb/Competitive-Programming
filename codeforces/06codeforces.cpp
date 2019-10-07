#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, t;
	cin >> n;
	vector<int> v, v1;
	set<int> S;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		v.push_back(t);
	}
	for (int i = 0; i < n; i++)
	{
		int c = count(v.begin(), v.end(), v[i]);
		v1.push_back(c);
	}
	sort(v1.rbegin(), v1.rend());
	auto it = v1.begin();
	cout << *it;
	return 0;
}
