#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 1000000
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n + 5] = {0}, c = 1;
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        ll i;
        for (i = n - 1; i >= 1; i--)
        {
            if (a[i] >= a[i + 1])
                c++;
            else
                break;
        }
        for (; i >= 1; i--)
        {
            if (a[i] <= a[i + 1])
                c++;
            else
                break;
        }
        cout << n - c << endl;
    }
    return 0;
}
