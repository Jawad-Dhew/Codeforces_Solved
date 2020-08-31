#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
    int n, sum = 0, c = 0;
    cin >> n;
    string s;
    cin >> s;
    if (s[0] == '0')
    {
        cout << 1 << endl;
        return 0;
    }
    sum++;
    c = 1;
    for (int i = 1; i < n; i++)
    {
        if (c == 1)
        {
            sum++;
            if (s[i] == '0')
            {
                c = 0;
            }
        }
        else
        {
            break;
        }
    }
    cout << sum << endl;
}