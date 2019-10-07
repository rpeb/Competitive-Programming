#include <bits/stdc++.h>
using namespace std;

int prime(int n)
{
	for (int i = 2; i*i <= n; i++)
	{
		if(n%i==0) return 1;
	}
	return 0;
}

int main()
{
	int n,i;
	cin >> n;
	if (n%2) cout << 1;
	else {
	for (i = 1; i < 1001; i++)
	{
		if (prime(n*i + 1)==1) break;
	}
	cout << i;
	}
	return 0;
}
