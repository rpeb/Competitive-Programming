#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,t,f=0;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> t;
		v.push_back(t);
	}
	for (int i = 0; i < n; i++)
	{
		int t = v[i];
		if(v[v[t-1]-1] == i+1) {
			cout << "YES";
			f=1;
			break;
		}
	}
	if (f==0) cout << "NO";
	return 0;
}
