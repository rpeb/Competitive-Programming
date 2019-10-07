#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, x, c0=0,c1=0;
	cin >> a >> b >> x;
	string s="";
	for (int i = 0; i <= x; i++)
	{
		if(i & 1) {s+='1'; c1++;}
		else {s+='0'; c0++;}
	}
	a=a-c0;
	b=b-c1;
	//cout << a << " " << b << "\n";
	if (x & 1) //akhiri me 1
	{
		while(a--)
		{
			s[s.length()-1]='0';
			s=s+'1';
		}
		while(b--)
		{
			s=s+'1';
		}
	}
	else {
		while(b--)
		{
			s[s.length()-1]='1';
			s=s+'0';
		}
		while(a--)
		{
			s=s+'0';
		}
	}
	cout << s;
	return 0;
}
