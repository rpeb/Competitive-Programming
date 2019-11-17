#include "comp.h"

double phi(ll n)
{
	double res = n;
	for (ll i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				n /= i;
				res -= res / i;
			}
		}
	}
	if (n > 1)
		res -= res / n;
	return res;
}

int main()
{
	double maxx = 10000;
	ll x = 0;
	for (ll i = 5000000; i < 10000000; i++)
	{
		double j = phi(i);
		string s = IntToString(i);
		string r = IntToString((ll)j);
		sort(s.begin(), s.end());
		sort(r.begin(), r.end());
		if (s == r)
		{
			if (i / j < maxx)
			{
				x = i;
				maxx = i / j;
			}
		}
	}
	cout << x << "\n";

	return 0;
}
