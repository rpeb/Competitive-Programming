#include <bits/stdc++.h>
using namespace std;
// Block Swap algo for array shifting
void swap(int arr[], int fi, int si, int d) {
	for (int i = 0; i < d; i++) {
		int temp = arr[fi + i];
		arr[fi + i] = arr[si + i];
		arr[si + i] = temp;
	}
}

void leftRotate(int arr[], int d, int n) {
	if (d == 0 || d == n) return;
	else {
		if (d == n-d) {
			swap(arr, 0, n-d, d);
			return;
		}
		if (d < n-d) {
			swap(arr, 0, n-d, d);
			leftRotate(arr, d, n-d);
		}
		if (d > n-d) {
			swap(arr, 0, d, n-d);
			leftRotate(arr + n - d, 2 * d - n, d);
		}
	}
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
	leftRotate(arr, d, size); 
	cout << "Shifted array is\n";
	for (int i = 0; i < size; i++) cout << arr[i] << "\t";
	cout << "\n";
	return 0;
}
