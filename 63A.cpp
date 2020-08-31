#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000
vector<string> r, w, c, m, k;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        if (b == "rat")
            r.push_back(a);
        else if (b == "woman" || b == "child")
            w.push_back(a);
        else if (b == "man")
            m.push_back(a);
        else
        {
            c.push_back(a);
        }
    }
    for (int i = 0; i < r.size(); i++)
        cout << r[i] << endl;
    for (int i = 0; i < w.size(); i++)
        cout << w[i] << endl;
    for (int i = 0; i < m.size(); i++)
        cout << m[i] << endl;
    cout << c[0] << endl;
    return 0;
}
