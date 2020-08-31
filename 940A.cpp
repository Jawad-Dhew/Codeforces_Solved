#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+5]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int x=abs(a[i]-a[j]);
            if(x>k)
            {
                c++;
                continue;
            }
        }
    }
    return 0;
}
