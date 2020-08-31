#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
    ll t;
    cin >> t;
    set<ll> s;
    for (ll i = 0; i < t; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }
    ll n = s.size();
    if (n == 2 || n == 1)
    {
        cout << "YES\n";
    }
    else if (n == 3)
    {
        vector<int> v;
        for (auto x : s)
        {
            v.push_back(x);
        }
        if (2 * v[1] == (v[0] + v[2]))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    else
    {
        cout << "NO\n";
    }
}