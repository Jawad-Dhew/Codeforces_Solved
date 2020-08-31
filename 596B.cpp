#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 1000000
int main()
{
    int n;
    cin >> n;
    ll a[n + 5] = {0}, sum = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] == a[i - 1])
            continue;
        else
        {
            sum += abs(a[i - 1] - a[i]);
        }
    }
    cout << sum << endl;
    return 0;
}