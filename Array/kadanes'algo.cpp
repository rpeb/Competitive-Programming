#include <bits/stdc++.h>
using namespace std;
int maxSubarray(int*, int);
int main()
 {
	int t;
	cin >> t;
	while (t--)
	{
	    int flag=-1;
	    int n;
	    cin >> n;
	    int arr[n];
	    for (int i = 0; i < n; i++) 
	    {
	        cin >> arr[i];
	        if (arr[i] > 0) flag=0;
	    }
	    if (flag == -1) 
	    {
	        sort(arr, arr+n);
	        cout << arr[n-1] << "\n";
	    }
	    else
	    cout << maxSubarray(arr, n) << "\n";
	}
	return 0;
}

int maxSubarray(int arr[], int n) {
    int max_so_far=0, max_ending_here=0;
    for (int i = 0; i < n; i++)
    {
        max_ending_here += arr[i];
        if (max_ending_here < 0) max_ending_here = 0;
        max_so_far = max(max_ending_here, max_so_far);
    }
    return max_so_far;
}
