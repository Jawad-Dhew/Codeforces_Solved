#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 1000000
int main()
{
    int n, c, m = 0;
    cin >> n;
    string a[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        c = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                c++;
            }
        }
        m = max(c, m);
    }
    cout << m + 1 << endl;
    return 0;
}
