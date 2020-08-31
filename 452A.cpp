#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 1000000
int main()
{
    int n, c, m = 0, ans;
    cin >> n;
    string s;
    cin >> s;
    string a[] = {"jolteon", "flareon", "umbreon", "leafeon", "glaceon", "sylveon"};
    if (n == 8)
    {
        cout << "vaporeon" << endl;
    }
    else if (n == 6)
    {
        cout << "espeon" << endl;
    }
    else
    {
        for (int i = 0; i < 6; i++)
        {
            c = 0;
            for (int j = 0; j < 7; j++)
            {
                if (s[j] == a[i][j])
                    c++;
            }
            if (m < c)
            {
                m = c;
                ans = i;
            }
        }
        cout << a[ans] << endl;
    }

    return 0;
}
