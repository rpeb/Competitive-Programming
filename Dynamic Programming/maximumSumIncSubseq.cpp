#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n)
{
    int Lis[n];
    for (int i = 0; i < n; i++)
        Lis[i] = arr[i];
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
                Lis[i] = max(Lis[i], Lis[j] + arr[i]);
        }
    }
    return *max_element(Lis, Lis + n);
}

int main()
{
    int arr[] = {1, 5, 8, 2, 3, 4};
    cout << maxSum(arr, 6) << "\n";
    return 0;
}