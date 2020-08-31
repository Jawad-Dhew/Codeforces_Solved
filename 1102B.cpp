#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000
int main()
{
    int n, k;
    cin >> n >> k;
    pair<int, int> p[5005];
    int ans[50000] = {0}, cx[50005] = {0};
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cx[x]++;
        if (cx[x] > k)
        {
            cout << "NO\n";
            return 0;
        }
        p[i] = {x, i};
    }
    sort(p, p + n);
    for (int i = 0; i < n; i++)
    {
        ans[p[i].second] = (i % k) + 1;
    }
    cout << "YES\n";
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
}