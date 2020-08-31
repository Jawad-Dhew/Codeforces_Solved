#include <bits/stdc++.h>
#include <sstream>
using namespace std;
#define ll long long
#define maxn 1000000
int main()
{
    ll n, k, c = 0, ans = 0;
    cin >> n >> k;
    ll a[n + 5] = {0};
    string x = "0123456789";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        stringstream ss;
        ss << a[i];
        string s;
        ss >> s;
        c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < k + 1; j++)
            {
                if (s[i] == x[j])
                {
                    c++;
                }
            }
        }
        if (c == k + 1)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
