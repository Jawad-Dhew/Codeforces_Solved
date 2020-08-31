#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 1000000
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> m;
        vector<int> v;
        for (int i = 0; i < 2 * n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
            if (m[x] == 1)
                v.push_back(x);
        }
        for (auto x : v)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}
