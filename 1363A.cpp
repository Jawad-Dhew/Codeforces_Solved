#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int>o;
        vector<int>e;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            if(a%2)
            {
                o.push_back(a);
            }
            else
                e.push_back(a);
        }
        int f=0;
        for(int i=0; i<o.size() && i<x; i+=2)
        {
            if(x-(i+1)<=e.size())
            {
                f=1;
                break;
            }
        }
        if(f)cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}

