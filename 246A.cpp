#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000
int main()
{
    int n;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << -1 << endl;
        return 0;
    }
    for (int i = n; i >= 1; i--)
    {
        cout << i << " ";
    }
    return 0;
}
