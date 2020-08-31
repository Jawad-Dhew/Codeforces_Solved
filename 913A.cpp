#include<bits/stdc++.h>
#include<math.h>
#define ll LONG_LONG_MAX;
using namespace std;
long long base(long long n)
{
    long long res=1,base=2;
    while(n)
    {
        if(n%2==1)
        {
            res=res*base;
            n--;
        }
        else if(n%2==0)
        {
            base*=base;
            n/=2;
        }
    }
    return res;
}
main()
{

    long long res,c,m,n;
    cin>>n>>m;
    if(n>60)
    {
        cout<<m<<endl;
    }
    else
    {
        c=base(n);
        res=m%c;
        cout<<res<<endl;
    }
}
