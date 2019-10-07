#include <bits/stdc++.h>

using namespace std;

int fact(int x)
{
	int i = 1;
	while(x>1)
	{
		i*=x;
		x--;
	}
	return i;
}

int main()
{
	long long int a,b;
	cin >> a >> b;
	cout << fact(min(a,b));
	return 0;
}
