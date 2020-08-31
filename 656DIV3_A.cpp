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
        ll a[5] = {0}, m = 0, x, f = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            m = max(m, a[i]);
        }
        if (m > 0)
        {
            x = count(a, a + 3, m);
        }
        if (x == 2)
        {
            cout << "YES\n";
            sort(a, a + 3);
            a[2] = 1;
            for (int i = 0; i < 3; i++)
            {
                cout << a[i] << " ";
            }
            cout << "\n";
            f = 1;
        }
        else if (x == 3)
        {
            cout << "YES\n";
            for (int i = 0; i < 3; i++)
            {
                cout << a[i] << " ";
            }
            cout << "\n";
            f = 1;
        }
        if (f == 0)
            cout << "NO\n";
    }
    return 0;
}
