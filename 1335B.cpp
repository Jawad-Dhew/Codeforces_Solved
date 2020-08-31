#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        string x,y;
        for(int i=0;i<=a-b;i++)
        {
            x+='a';
        }
        for(int i=0;i<b-1;i++)
        {
            x+='a'+i+1;
        }
        for(int i=0;i<n;i++)
        {
            cout<<x[i%a];
        }
        cout<<endl;
    }
}
