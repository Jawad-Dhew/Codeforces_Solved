#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn = 1e5 + 5;
ll a[maxn], d[maxn], s[maxn], l[maxn], r[maxn], v[maxn];

int main()
{
    int n, m, k;

    cin >> n >> m >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        d[i] = a[i] - a[i - 1];
    }

    for (int i = 1; i <= m; i++)
        cin >> l[i] >> r[i] >> v[i];
    while (k--)
    {
        int x, y;
        cin >> x >> y;
        s[x]++;
        s[y + 1]--;
    }
    for (int i = 1; i <= m; i++)
        s[i] += s[i - 1];
    for (int i = 1; i <= m; i++)
    {
        v[i] = v[i] * s[i];
        d[l[i]] += v[i];
        d[r[i] + 1] -= v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        a[i] = d[i] + a[i - 1];
        cout << a[i] << " ";
    }
    return 0;
}
