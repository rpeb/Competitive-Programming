#include <bits/stdc++.h>
using namespace std;

int coins[] = {1, 3, 4};
int value[4];

int main()
{
    value[0] = 0;
    for (int x = 1; x <= 10; x++)
    {
        value[x] = INT_MAX;
        for (auto c : coins)
        {
            if (x - c >= 0)
            {
                value[x] = min(value[x], value[x - c] + 1);
            }
        }
    }
    for (auto x : value)
        cout << x << " ";
    cout << "\n";
    return 0;
}