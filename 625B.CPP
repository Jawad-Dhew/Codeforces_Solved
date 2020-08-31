#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int c = 0;
    if (a.size() < b.size())
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i <= a.size() - b.size(); i++)
    {
        if (a.substr(i, b.size()) == b)
        {
            c++;
            i += b.size() - 1;
        }
    }
    cout << c << endl;
    return 0;
}
