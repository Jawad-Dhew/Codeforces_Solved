#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 1000000
int main()
{
    int ans = 0, i, k = -1, n;
    string s;
    cin >> s;
    n = s.size();
    for (i = 0; i < n - 3; i++)
    {
        if (s.substr(i, 4) == "bear")
        {
            ans += (i - k) * (n - i - 3);
            k = i;
        }
    }
    cout << ans;
    return 0;
}
