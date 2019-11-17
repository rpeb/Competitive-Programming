//longest increasing subsequence in an array

#include <bits/stdc++.h>
using namespace std;

int lis(int arr[], int n)
{
	int Lis[n] = {1};
	//memset(Lis, sizeof(Lis), 1);
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] < arr[i])
				Lis[i] = max(Lis[i], Lis[j] + 1);
		}
	}
	return *max_element(Lis, Lis + n);
}

int main()
{
	int arr[] = {1, 5, 8, 2, 3, 4};
	cout << lis(arr, 6) << "\n";
	return 0;
}
