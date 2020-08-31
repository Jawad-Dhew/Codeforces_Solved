#include<bits/stdc++.h>
#include<set>
#include<string>
using namespace std;
int main()
{
    set<string>ss;
    int n;
    cin>>n;
    while(n--)
    {
        string s,a="";
        cin>>s;
        set<char>x;
        set<char>::iterator it;
        for(int i=0; i<s.size(); i++)
        {
            x.insert(s[i]);
        }
        for(it=x.begin();it!=x.end();it++)
        {
            a+=*it;
        }
        ss.insert(a);

    }
    cout<<ss.size()<<endl;
    return 0;
}

