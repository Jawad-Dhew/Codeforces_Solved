#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,m,f=0;
        cin>>a>>b>>n>>m;
        if(a+b>=(n+m))
        {
            if(min(a,b)>=m)cout<<"Yes\n";
            else
                cout<<"No\n";
        }
        else
            cout<<"No\n";
    }
    return 0;
}

