#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 1000000
int main()
{
    int n, m;
    cin >> n >> m;
    map<char, char> mp;
    for (char i = 'a'; i <= 'z'; i++)
        mp[i] = i;
    string s;
    cin >> s;
    for (int j = 0; j < m; j++)
    {
        char a, b;
        cin >> a >> b;
        for (char i = 'a'; i <= 'z'; i++)
        {
            if (mp[i] == a)
                mp[i] = b;
            else if (mp[i] == b)
                mp[i] = a;
        }
    }
    for (int i = 0; i < s.size(); i++)
        cout << mp[s[i]];
    return 0;
}
