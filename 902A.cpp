#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 1000000
int main()
{
    int n, m, x, y, l = 0, f = 0, ans = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x > l)
        {
            f = 1;
        }
        if (l < y)
            l = y;
        if (l >= m && f == 0)
        {
            ans = 1;
        }
    }
    if (ans)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
