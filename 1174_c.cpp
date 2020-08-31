#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[100007];
int main()
{
    int n,c=1;
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        if(a[i]==0)
        {
            a[i]=c;
            for(int j=i*2; j<=n; j+=i)
            {
                a[j]=c;
            }
            c++;
        }
        cout<<a[i]<<" ";
    }
    return 0;
}

