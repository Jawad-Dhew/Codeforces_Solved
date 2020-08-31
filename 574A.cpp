#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
    int n, x;
    cin >> n;
    int a[n + 5] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    x = a[0];
    while (1)
    {
        sort(a + 1, a + n);
        if (a[n - 1] >= a[0])
        {
            a[n - 1]--;
            a[0]++;
        }
        else
        {
            cout << a[0] - x << endl;
            return 0;
        }
    }
}