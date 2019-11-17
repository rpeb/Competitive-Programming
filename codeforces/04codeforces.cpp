#include "comp.h"

//bool f(pair<int, int> a, pair<int, int> b) {
//	return a.first > b.first;
//}

int main()
{
	IOS;
	wez(n);
	vi v;
	vi v1;
	//multimap< pair<int, int> > m;
	F(i, 0, n)
	{
		wez(t);
		v.pb(t);
		v1.pb(t);
	}
	sort(v1.rbegin(), v1.rend());
	//	for (auto x: v1) cout << x << " ";
	int sum = 0;
	F(i, 0, n)
	{
		sum += (v1[i] * i + 1);
	}
	cout << sum << "\n";
	for (auto x : v1)
	{
		auto it = find(v.begin(), v.end(), x);
		*it = 0;
		cout << it - v.begin() + 1 << " ";
	}
	return 0;
}
