#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
    int n, t, f = 0;
    cin >> n >> t;
    int a[n + 5] = {0};
    for (int i = 1; i <= n - 1; i++)
    {
        cin >> a[i];
    }
    int x = 1;
    while (x <= t)
    {
        if (x == t)
        {
            f = 1;
            break;
        }
        else
        {
            x += a[x];
        }
    }
    if (f)
        cout << "YES\n";
    else
    {
        cout << "NO\n";
    }
}