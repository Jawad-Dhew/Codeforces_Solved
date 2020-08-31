#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.1415926536
int main()
{
    int n;
    double ans = 0.0;
    cin >> n;
    int a[n + 5] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = n - 1; i > 0; i -= 2)
    {
        ans += ((pi * a[i] * a[i]) - (pi * a[i - 1] * a[i - 1]));
    }
    if (n % 2)
    {
        ans += (pi * a[0] * a[0]);
    }
    cout << ans << endl;
    ;

    return 0;
}
