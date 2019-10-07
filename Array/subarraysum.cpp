#include <bits/stdc++.h>
using namespace std;
int subSum(int*, int, int);

int main() 
{
    int t;
    cin >> t;
    while (t--) {
	int n, s;
	cin >> n >> s;
	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	subSum(arr, n, s);
    }
    return 0;
}
int subSum(int arr[], int n, int sum)
{
	int curr_sum = arr[0], start = 0;
	for (int i = 1; i <= n; i++)
	{
		while (curr_sum > sum && start < i-1)
		{
		    curr_sum -= arr[start];
		    start++;
		}
        if (curr_sum == sum){
		    cout << start + 1 << " " << i << "\n";
		    return 1;
		}
		if (i < n) curr_sum += arr[i];
	}
	cout << -1 << "\n";
	return -1;
}
