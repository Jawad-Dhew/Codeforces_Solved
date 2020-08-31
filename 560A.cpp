#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
    int n, f = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
            f = 1;
    }
    if (f)
        cout << -1 << endl;
    else
    {
        cout << 1 << endl;
    }
}