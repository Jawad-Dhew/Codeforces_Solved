#include<bits/stdc++.h>
using namespace std;
#define n 100005
int b[100005],a[505][505];
vector<int>p;
void seive()
{
    b[0]=b[1]=1;
    for(int i=4; i<=n; i+=2)
    {
        b[i]=1;
    }
    for(int j=3; j*j<=n; j+=2)
    {
        if(!b[j])
        {
            for(int i=j*j; i<=n; i+=(j*2))
            {
                b[i]=1;
            }
        }
    }
    p.push_back(2);
    for(int i=3; i<=n; i+=2)
    {
        if(!b[i])
            p.push_back(i);
    }
}
int main()
{
    int x,y;
    seive();
    cin>>x>>y;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cin>>a[i][j];
        }
    }
    int m=LONG_MAX,d;
    for(int i=0;i<x;i++)
    {
        d=0;
        for(int j=0;j<y;j++)
        {
            vector<int>::iterator it=lower_bound(p.begin(),p.end(),a[i][j]);
            d+=(*it-a[i][j]);
        }
        m=min(m,d);
    }
    for(int i=0;i<y;i++)
    {
        d=0;
        for(int j=0;j<x;j++)
        {
            vector<int>::iterator it=lower_bound(p.begin(),p.end(),a[j][i]);
            d+=(*it-a[j][i]);
        }
        m=min(m,d);
    }
    cout<<m<<endl;
    return 0;
}
