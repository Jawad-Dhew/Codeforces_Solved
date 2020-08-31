#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n + 5] = {0}, v[n + 5] = {0};
    set<int> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = n; i > 0; i--)
    {
        s.insert(v[i]);
        a[i] = s.size();
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        cout << a[x] << "\n";
    }
    return 0;
}
