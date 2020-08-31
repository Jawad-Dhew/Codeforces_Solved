#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 1000000
int main()
{
    string s, t;
    char c;
    cin >> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        t = s;
        for (int j = 0; j < z; j++)
        {
            for (int k = x - 1; k < y - 1; k++)
            {
                t[k + 1] = s[k];
            }
            t[x - 1] = s[y - 1];
            s = t;
        }
        cout << t << endl;
    }

    return 0;
}
