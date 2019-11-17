#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string s;
		int begin,end,f=0,zero=0;
		cin >> s;
		for (int i = 0; i < n; i++)
		{
			if(s[i]=='1') {end=i;zero=1;}
			if(s[i]=='1' && f==0) {begin=i;f=1;}
		}
		if(zero==1) {
			int fc=(end+1)*2, sc=(n-begin)*2;
			cout << max(fc,sc) << "\n";
		}
		else cout << n << "\n";
	}
	return 0;
}
