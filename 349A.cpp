#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
    int n, got_25 = 0, got_50 = 0;
    cin >> n;
    int a[n + 5] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (a[0] != 25)
    {
        cout << "NO\n";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {

        if (a[i] == 25)
            got_25++;
        else if (a[i] == 50 && got_25 > 0)
        {
            got_25--;
            got_50++;
        }
        else if (a[i] == 100 && got_50 > 0 && got_25 > 0)
        {
            got_25--;
            got_50--;
        }
        else if (a[i] == 100 && got_25 > 2)
        {
            got_25 -= 3;
        }
        else
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}