#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout << "YES\n";
//cout << "NO\n";
main()
{
    string s, x = "abcdefghijklmnopqrstuvwxyz", s1 = "";
    int n;
    cin >> n >> s;
    set<char> ss;
    for (int i = 0; i < n; i++)
    {
        ss.insert(s[i]);
    }
    for (auto x : ss)
    {
        s1 += x;
    }
    if (s1.compare(x) == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}