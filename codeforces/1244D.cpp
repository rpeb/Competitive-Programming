#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,y;
	cin >> n;
	int arr[n]={0};
	int edge[n]={0};
	int cost[3][n];
	int adjac[n][n]={0}; 
	for (int i = 0; i < 3; i++)
	{
	
		for (int j = 0; j < n; j++)
		{
			cin >> cost[i][j];
		}
	}
	for  (int i = 0; i < n-1; i++)
	{
		cin >> x >> y;
		adjac[x-1][y-1]=adjac[y-1][x-1]=1;
		edge[x-1]++;
		edge[y-1]++;	
	}
	if (*max_element(edge, edge+n) >= 3) {
	cout << -1 << "\n";return 0;
	}
	else {
		for (int i = 0; i < n; i++)
		{
			if (edge[i]==1) {
				int y=i,co=0;
				while(y != n) {
					arr[co]=y;
					int x;
					for(x = 0; x < n; x++)
					{
						if(adjac[y][x]==1) {
							adjac[y][x]=adjac[x][y]=0;
							break;
						}
					}
					y=x;
					co++;
				}
			}
			break;
		}
	}
	int per[6][3]={{1,2,3},{1,3,2},{2,1,3},{2,3,1},{3,1,2},{3,2,1}};
	int min=INT_MAX;int pp=0;
	for (int x = 0; x < 6; x++){
	int sum=0;
		for(int y=0;y<n;y++)
			{
				sum+=cost[per[x][y%3]-1][arr[y]];
					
			}
			if(sum<min){min=sum;pp=x;}
	}
	
	cout << min << "\n";
	for(int x=0;x<n;x++)
	cout<<per[pp][x%3]<<" ";
	return 0;
}
