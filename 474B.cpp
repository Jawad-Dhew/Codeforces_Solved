#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 1000000
int main()
{
    int n, m;
    cin >> n;
    ll a[n + 5] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    cin >> m;
    vector<ll> v;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        ll ans = lower_bound(a, a + n, x) - a;
        v.push_back(ans);
    }
    for (auto x : v)
        cout << x << endl;
    return 0;
}
