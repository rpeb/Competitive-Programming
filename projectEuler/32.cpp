#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	set<int> s;
	for (int i = 0; i < 362880; i++)
	{
		next_permutation(arr, arr+9);
		int first=100*arr[0]+10*arr[1]+arr[2];
		int second=10*arr[3]+arr[4];
		int one=arr[0];
		int four=1000*arr[1]+100*arr[2]+10*arr[3]+arr[4];
		int result=1000*arr[5]+100*arr[6]+10*arr[7]+arr[8];
		if(first*second==result || one*four==result) s.insert(result);
	}
	int sum=0;
	for (auto it : s)
	sum+=it;
	cout << sum << "\n";
	
	return 0;
}
