#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n,max=0;
    cin>>t;
    while(t--)
    {
        max=0;
        cin>>n;
        int a[n];
        vector<int>c(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    c[i]++;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(max<c[i])max=c[i];
        }
        while(n!=0)
        {
            if((n/2)<=max)
            {
                cout<<n/2<<endl;
                break;
            }
            n--;
        }
    }
}
