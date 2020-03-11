#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
main()
{
    ll n,m,i,j,t;
    cin>>t;
    stack<ll>s;
    s.push(1);
    string s1;
     ll v=0;
 for(i=0;i<t;i++)
    {
        cin>>s1;
        if(s1=="add")
        {
            v+=s.top();
            if(v>=ll(1)<<32)
            {
                cout<<"OVERFLOW!!!"<<endl;
                return 0;
            }
           }
           else if(s1=="for")
           {
               cin>>n;
               s.push(min(n*s.top(),ll(1)<<32));
           }
           else {
            s.pop();
           }
    }
    cout<<v<<endl;
}
