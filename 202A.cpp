#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    string s;
    char c;
    cin >> s;
    int n = s.size();
    sort(s.begin(), s.end());
    cout << s[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (s[n - 1] == s[i])
            cout << s[i];
    }
    return 0;
}
