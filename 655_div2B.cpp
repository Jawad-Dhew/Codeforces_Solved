#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000
ll m = INT_MAX;
int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n / 2 << " " << n / 2 << endl;
        }
        else
        {
            for (ll i = n - 1; i >= (int)sqrt(n); i--)
            {
                if (n % i == 0)
                {
                                }
            }
            cout << a << " " << b << endl;
        }
    }
    return 0;
}
