#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int count=0;
	for (int i = 0; i < n-1; i+=2)
	{
		if (s[i] == s[i+1])
		{
			count++;
			if (s[i] == 'a') s[i]='b';
			else if (s[i] == 'b') s[i] = 'a';
		}
	}
	cout << count << "\n";
	cout << s << "\n";
	return 0;
}
