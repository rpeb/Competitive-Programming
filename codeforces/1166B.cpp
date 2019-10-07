#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k, j=0, i=0; // i row, j col
	cin >> k;
	for (i = 5; i < k/2; i++)
	{
		if (k%i==0 && k/i >= 5) {
		j = k/i; break;
		}
	}
	if(j==0) cout << -1 << "\n";
	else {
		char mat[5][6] = {"aeiou", "eioua", "iouae", "ouaei", "uaeio"};
		char matrix[i][j] = {'\0'};
		int c = min(i,j);
		c = c/5;int y,z;
		for (int x = 1; x <= c; x++)
		{
			for (y = (x-1)*5; y < 5*x; y++)
			{
				for (z = (x-1)*5; z < 5*x; z++)
				{
					matrix[y][z] = mat[y-(x-1)*5][z-(x-1)*5];
				}
			}
		}
		
		for(int q=z;q<j;q++)
		{
			for(int p=0;p<5;p++)
				matrix[p][q]=mat[0][p];
				}
		
			for(int q=y;q<i;q++)
			{
			for(int p=0;p<5;p++)
				matrix[q][p]=mat[0][p];	}
		string ans="";
		for(int x=0;x<i;x++){
		for(int y=0;y<j;y++)
			{if(matrix[x][y]=='\0'){matrix[x][y]='z';ans=ans+"z";}
			else ans=ans+matrix[x][y];
			
			}}
		cout<<ans;
		}
	return 0;
}
