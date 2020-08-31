#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 1000000
int main()
{
    string s;
    cin >> s;
    int f = 0, i = 0, x = 0;
    int n = s.size();
    while (i < n && s[i] == 'a')
        i++;
    while (i < n && s[i] != 'a')
    {
        --s[i];
        f = 1;
        i++;
    }
    if (f)
        cout << s << endl;
    else
    {
        s.back() = 'z';
        cout << s << endl;
    }

    return 0;
}
