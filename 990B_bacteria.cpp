#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000
int main()
{
    int n, k, c = 0;
    cin >> n >> k;
    int a[n + 5] = {0};
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        int z;
        cin >> z;
        v.push_back(z);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        int y = v[i] + k;
        int x = lower_bound(v.begin(), v.end(), y) - v.begin();
        cout << "x ===" << x << endl;
        if (x >= 0)
        {
            a[i] = 0;
        }
        else
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
