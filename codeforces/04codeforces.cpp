#include <bits/stdc++.h>
using namespace std;

//bool f(pair<int, int> a, pair<int, int> b) {
//	return a.first > b.first;
//}

int main()
{
	int n,t;
	cin >> n;
	vector<int> v;
	vector<int> v1;
	//multimap< pair<int, int> > m;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		v.push_back(t);
		v1.push_back(t);
	}
	sort(v1.rbegin(), v1.rend());
//	for (auto x: v1) cout << x << " ";
	int	sum=0;
	for (int i = 0; i < n; i++)
	{
		sum+=(v1[i]*i + 1);
	}
	cout << sum << "\n";
	for (auto x: v1) {
		auto it = find(v.begin(), v.end(), x);
		*it=0;
		cout << it-v.begin()+1 << " ";
	}
	return 0;
}
