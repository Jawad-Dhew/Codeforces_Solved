#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
            cout << 0;
        else
        {
            cout << 1;
        }
    }
}