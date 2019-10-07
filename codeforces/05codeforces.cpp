#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int gcd(int a, int b)
{
	if (b==0) return a;
	return gcd(b, a%b);
}

int main()
{
	ull int t,n, sum=0;
	cin >> n;
	vector<ull int> v;
	for (ull int i = 0; i < n; i++) {
		cin >> t;
		v.push_back(t);
		sum+=v[i];
	}
	ull int maxi = *max_element(v.begin(), v.end());
	for (ull int i = 0; i < n; i++) {
		v[i] = maxi-v[i];
	}
	ull int gc = gcd(v[0], v[1]);
	for (ull int i = 2; i < n; i++)
	{
		gc = gcd(gc, v[i]);
	}
	cout << (n*maxi-sum)/gc << " " << gc << "\n";
}
