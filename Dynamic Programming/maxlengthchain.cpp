#include <bits/stdc++.h>
using namespace std;
struct val{
	int first;
	int second;
};
int maxChainLen(struct val p[],int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/
/*You are required to complete this method*/
int maxChainLen(struct val p[],int n)
{
//Your code here
    int arr[n]={1};
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(p[j].second < p[i].first)
            arr[i] = max(arr[i],arr[j]+1);
        }
    }
    return *max_element(arr,arr+n);
}
