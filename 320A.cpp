#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
    string s;
    cin >> s;
    if (s[0] != '1')
    {
        cout << "NO\n";
        return 0;
    }
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != '1' && s[i] != '4')
        {
            cout << "NO\n";
            return 0;
        }
        else if (s[i] == '4')
        {
            if (s[i + 1] == '4' && s[i + 2] == '4')
            {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
}