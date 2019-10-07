#include <bits/stdc++.h>
using namespace std;
int binarySearch(int*, int, int, int);
int main()
 {
	int t;
	cin >> t;
	while (t--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    for (int i = 0; i < n; i++) cin >> arr[i];
	    sort(arr, arr+n);
	    int counter = 0;
	    for (int i = 0; i < n; i++)
	    {
	        for (int j = i+1; j < n; j++)
	        {
	            if (binarySearch(arr, arr[i]+arr[j], i+1, n-1) != -1)
	            counter++;
	        }
	    }
	    if (counter==0) cout << -1 << "\n";
	    else cout << counter << "\n";
	}
	return 0;
}

int binarySearch(int arr[], int se, int l, int r)
{
	if (l < r) {
		int mid = (l+r)/2;
		if (se == arr[mid]) return mid;
		else if (se < arr[mid]) return binarySearch(arr, se, l, mid);
		else return binarySearch(arr, se, mid+1, r);
	}
	else if (se == arr[r]) return r;
	else return -1;
}
