#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,c=0,f=1;
        cin>>n;
        if(n==1)
        {
            cout<<0<<endl;
        }
        else
        {
            while(n!=1)
            {
                if(n%6==0)
                {
                    n=n/6;
                    c++;
                }
                else
                {
                    n*=2;
                    c++;
                    if(n%6!=0)
                    {
                        cout<<-1<<endl;
                        f=0;
                        break;
                    }
                }
            }
            if(f)cout<<c<<endl;
        }
    }
    return 0;
}

