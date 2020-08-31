#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
    int n, m, c1 = 0, c2 = 0;
    cin >> n >> m;
    if (n % 2)
    {
        c1 = 1;
        c2 = n / 2;
    }
    else
    {
        c2 = n / 2;
    }
    if ((c1 + c2) % m == 0)
    {
        cout << c1 + c2 << endl;
        return 0;
    }
    else
    {
        while (c2 != 0)
        {
            c2--;
            c1 += 2;
            if ((c1 + c2) % m == 0)
            {
                cout << c1 + c2 << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
}