#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    ll a[n + 5] = {0};
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == 'v' && s[i - 1] == 'v')
        {
            a[i] = a[i - 1] + 1;
        }
        else
        {
            a[i] = a[i - 1];
        }
    }
    ll ans = 0, m = a[n - 1];
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'o')
            ans += (m - a[i]) * a[i];
    }
    cout << ans << endl;
    return 0;
}
