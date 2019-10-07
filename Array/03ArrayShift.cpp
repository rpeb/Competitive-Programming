// Block swap array shifting iterative approach
#include <bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j, int d) 
{
	for (int m = 0; m < d; m++)
	{
		int temp = arr[m + i];
		arr[m + i] = arr[m + j];
		arr[m + j] = temp;
	}
}

void shift(int arr[], int d, int n) {
	if (d == 0 || d == n) return;
	int i = d, j = n-d;
	while(i != j) {
		if (i < j) 
		{
			swap(arr, d-i, d+j-i, i);
			j -= i;
		}
		else {
			swap(arr, d-i, d, j);
			i -= j;
		}
	}
	swap(arr, d-i, d, i);
}

int main() 
{
	int size;
	cout << "Enter the size of array" << endl;
	cin >> size;
	int arr[size];// = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	// shift array left by 3 elements
	for (int i = 0; i < size; i++) arr[i] = i+1;
//	int size = sizeof(arr)/sizeof(arr[0]);
	int d;
	cout << "Shift by what amount" << endl;
	cin >> d;
	shift(arr, d, size); 
	cout << "Shifted array is\n";
	for (int i = 0; i < size; i++) cout << arr[i] << "\t";
	cout << "\n";
	return 0;
}
