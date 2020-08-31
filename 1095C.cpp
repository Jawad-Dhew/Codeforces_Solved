#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000
bool check_bit(ll n, ll k)
{
    return n & (1LL << k);
}
vector<ll> s;
int main()
{
    ll n, k;
    cin >> n >> k;
    if (n < k)
    {
        cout << "NO\n";
        return 0;
    }
    for (ll i = 0; i < 64; i++)
    {
        if (check_bit(n, i))
        {
            s.push_back(1 << i);
        }
    }
    ll i = 0;
    if (s.size() > k)
        cout << "NO\n";
    else
    {
        cout << "YES\n";
        while (s.size() < k)
        {
            if (s[i] > 1)
            {
                while (s[i] > 1)
                {
                    s[i] /= 2;
                    s.push_back(s[i]);
                    if (s.size() == k)
                        break;
                }
            }
            i++;
        }
        sort(s.begin(), s.end());
        for (int i = 0; i < k; i++)
        {
            cout << s[i] << " ";
        }
    }
    return 0;
}
