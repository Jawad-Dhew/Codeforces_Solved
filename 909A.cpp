#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000
int main()
{
    string a, b;
    cin >> a >> b;
    int i;
    cout << a[0];
    for (i = 1; i < a.size(); i++)
    {
        if (a[i] >= b[0])
            break;
        else
        {
            cout << a[i];
        }
    }
    cout << b[0] << endl;
    return 0;
}
