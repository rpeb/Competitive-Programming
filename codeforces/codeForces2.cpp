#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int arr[2][n];
		int row1, row2;
		cin >> row1 >> row2;
		for (int i = 0; i < n; i++)
		{
			arr[0][n-i-1] = row1%10;
			row1/=10;
			arr[1][n-i-1] = row2%10;
			row2/=10;
		}
		for (int i = 0; i < n; i++)
		{
			if (arr[0][i] == 1 || arr[0][i] == 2) arr[0][i] = 0;
			else arr[0][i] = 1;
			if (arr[1][i] == 1 || arr[1][i] == 2) arr[1][i] = 0;
			else arr[1][i] = 1;
			
		}
		int i, c = 0;
		for (i = 0; i < n; i++)
		{
			if (arr[0][i] == 1 && arr[1][i] == 1) c++;
//			if ((arr[0][i] == 1 && arr[1][i] == 0) || (arr[0][i] == 0 && arr[1][i] == 1)) break;
			if (c%2==0 && arr[0][i]==1 && arr[1][i]==0) break;
			if (c%2==1 && arr[1][i]==1 && arr[0][i]==0) break; 
		}
		if ((c & 1) && i == n) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
	return 0;
}
