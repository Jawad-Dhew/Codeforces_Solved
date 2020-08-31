#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[100000],c[100000],t[100000];
int main()
{
    int n,k,m=0,pos,ans=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>t[i];
        if(t[i]==0)
        {
            c[i]=a[i]+c[i-1];
        }
        else
        {
            c[i]+=c[i-1];
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(t[i]==0)
        {
            ll temp=c[min(i+k-1,n)]-c[i-1];
            if(temp>m)m=temp,pos=i;
        }
    }
    for(int i=pos;i<=(pos+k-1);i++)
    {
        t[i]=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(t[i]==1)ans+=a[i];
    }
    cout<<ans<<endl;
    return 0;
}

