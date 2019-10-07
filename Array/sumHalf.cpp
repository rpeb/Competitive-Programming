#include <bits/stdc++.h>
#define ull unsigned long long int
using namespace std;
int main()
 {
	int t;
	cin >> t;
	while (t--)
	{
	    ull n;
	    cin >> n;
	    ull arr[n];
	    for (ull i = 0; i < n; i++) cin >> arr[i];
	    ull sum = 0;
	    for (ull i = 0; i < n; i++) sum += arr[i];
	    sum /= 2;
	    ull s = 0, i;
	    for (i = 0; i < n; i++)
	    {
	    	s += arr[i];
	    	if (s >= sum) break;
	    }
	    if (i < n)
	    cout << i << "\n";
	    else
	    cout << -1 << "\n";
	}
	return 0;
}
