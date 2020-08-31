#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, k, x, ans = INT_MAX;
    cin >> n >> k;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i < k)
                ans = min(((n / i) * k) + i, ans);
            if ((n / i) < k)
                ans = min(ans, (i * k) + (n / i));
        }
    }
    cout << ans << endl;
    return 0;
}
