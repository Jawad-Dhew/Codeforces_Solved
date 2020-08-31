#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, c, maxn = 0, f = 0, col = -1, row = -1;
    cin >> n >> m;
    char s[n + 5][m + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < m - 1; j++)
        {
            if (s[i][j] == '*' && s[i - 1][j] == '*' && s[i + 1][j] == '*' && s[i][j + 1] == '*' && s[i][j - 1] == '*')
            {
                row = i;
                col = j;
            }
        }
    }
    if (row == -1)
    {
        cout << "NO\n";
        return 0;
    }
    s[row][col] = '.';
    for (int i = row + 1; i < n; i++)
    {
        if (s[i][col] == '*')
            s[i][col] = '.';
        else
        {
            break;
        }
    }
    for (int i = row - 1; i >= 0; i--)
    {
        if (s[i][col] == '*')
            s[i][col] = '.';
        else
        {
            break;
        }
    }
    for (int i = col - 1; i >= 0; i--)
    {
        if (s[row][i] == '*')
            s[row][i] = '.';
        else
        {
            break;
        }
    }
    for (int i = col + 1; i < m; i++)
    {
        if (s[row][i] == '*')
            s[row][i] = '.';
        else
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == '*')
            {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
}
