#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000
int main()
{
    int n;
    cin >> n;
    ll a[n + 5] = {0}, v[n + 5] = {0};
    pair<int, int> p[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v[i] = a[i];
    }
    sort(v, v + n);
    for ()
        // int c = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     if (a[i] != v[i])
        //     {
        //         int x = lower_bound(a, a + n, v[i]) - a;
        //         cout << "index:" << x << " id_>" << i << endl;
        //         c++;
        //         p[c] = make_pair(i, x);
        //         v[x] = a[i];
        //     }
        // }
        // if (c)
        // {
        //     cout << c << endl;
        //     for (int i = 1; i <= c; i++)
        //     {
        //         cout << p[i].first << p[i].second << endl;
        //     }
        // }
        // else
        // {
        //     cout << c << endl;
        // }

        return 0;
}
