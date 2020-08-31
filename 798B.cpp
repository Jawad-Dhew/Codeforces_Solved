#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 1000000
int main()
{
    int n, sum = 0, m = INT_MAX;
    cin >> n;
    string s[n + 5], c[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        c[i] = s[i] + s[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (c[j].find(s[i]) == string::npos)
            {
                cout << "-1" << endl;
                return 0;
            }
            else
            {
                sum += c[j].find(s[i]);
            }
        }
        m = min(m, sum);
    }
    cout << m << endl;
    return 0;
}
