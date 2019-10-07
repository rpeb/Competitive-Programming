#include <bits/stdc++.h>
using namespace std;
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
	    int k;
	    cin >> k;
	    vector<int> v;
	    
	    while (k--) {
	    int pos;
	    int min = INT_MAX;
	    for (int i = 0; i < n; i++)
	    {
	        if (arr[i] < min) 
	        {
	            min = arr[i];
	            pos = i;
	        }
	    }
	    v.push_back(arr[pos]);
	    arr[pos] = 1000000;
	    }
	    vector<int>:: iterator it = v.end();
	    cout << *it << endl;
	}
	return 0;
}
