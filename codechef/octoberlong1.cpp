#include <bits/stdc++.h>
using namespace std;

int fiveCheck(int arr[], int n);


int main()
{	
	int t;
	cin >> t;
	while(t--) {
	int n, c = 0, f = 0;
	cin >> n;
	int arr[n+5];
	for (int i = 0; i < 5; i++)
	{
		arr[i]=751;
	}
	for (int i = 5; i < n+5; i++) 
	{
		cin >> arr[i];
	}
	for (int i = 5; i < n+5; i++)
	{
		for (int x = i-5; x < i; x++)
		{
			if (arr[i] >= arr[x]) f=1;
		}
		if (f==0) c++;
		f=0;
	}
	cout << c << "\n";
	}
	return 0;
}
