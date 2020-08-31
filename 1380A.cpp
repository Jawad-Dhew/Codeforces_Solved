#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5] = {0}, f = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 2; i < n; i++)
        {
            if (a[i - 1] < a[i] && a[i] > a[i + 1])
            {
                cout << "YES\n";
                cout << i - 1 << " " << i << " " << i + 1 << endl;
                f = 1;
                break;
            }
        }
        if (!f)
            cout << "NO\n";
    }
    return 0;
}
