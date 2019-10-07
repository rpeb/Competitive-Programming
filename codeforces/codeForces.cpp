#include <bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue<int> p;							  //max queue
	priority_queue<int, vector<int>, greater<int>> q; //min queue
	for (int i = 0; i < 4; i++)
	{
		q.push(rand() % 100);
	}
	while (!q.empty())
	{
		cout << q.top() << " ";
		q.pop();
	}
	cout << "\n";
	return 0;
}