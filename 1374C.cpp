#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char>b;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='(')b.push(s[i]);
            else
            {
                if(b.empty()==false && b.top()=='(')b.pop();
                else
                    b.push(s[i]);
            }
        }
        cout<<b.size()/2<<endl;
    }
    return 0;
}

