#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n + 5] = {0}, b[m + 5] = {0}, id[n + 5] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        id[i] = x;
        if (b[x] < a[i])
        {
            b[x] = a[i];
        }
    }
    int c = 0;
    for (int i = 1; i <= k; i++)
    {
        int x;
        cin >> x;
        int y = id[x];
        if (b[y] != a[x])
            c++;
    }
    cout << c << endl;
    return 0;
}
