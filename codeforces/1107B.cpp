#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,x;
	long long int k;
	cin >> n;
	while(n--)
	{
		cin >> k >> x;
		cout << x + ((k-1) * 9) << "\n";
	} 
	return 0;
}
