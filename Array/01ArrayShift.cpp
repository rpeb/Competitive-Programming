#include <bits/stdc++.h>
using namespace std;

// juggling method

int gcd(int a, int b) {
	if (b==0) return a;
	else return gcd(b, b%a);
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
	int g_cd = gcd(size,d);

	for (int i = 0; i < g_cd; i++) {
		int temp = arr[i];
		int j = i;
		while(1) {
			int k = j+d;
			if (k >= size) k = k-size;
			if (k==i) break;
			arr[j] = arr[k];
			j = k;			
		}
		arr[j] = temp;
	}
	cout << "Shifted array is\n";
	for (int i = 0; i < size; i++) cout << arr[i] << "\t";
	cout << "\n";
	return 0;
}
