#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,t;
	cin >> n >> k;
	vector<int> v;
	for (int i = 0; i < n; i++) 
	{
		cin>>t;
		v.push_back(t);
	}
	double av=0;
	for (int i = 0; i<k; i++)
	{
		av+=v[i];
	}
	
}
