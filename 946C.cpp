#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 1000000
int main()
{
    string s;
    cin >> s;
    char x = 'a';
    int f = 0, l;
    l = s.size();
    if (l < 26)
    {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] <= x)
        {
            s[i] = x;
            x++;
        }
        if (x > 'z')
        {
            f = 1;
            break;
        }
    }
    if (f)
        cout << s << endl;
    else
    {
        cout << -1 << endl;
    }
}
