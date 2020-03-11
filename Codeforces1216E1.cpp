#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string x;
    ll i,j,n,ans=0,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        x="";
        i=1;
        while(1)
        {
            x+=to_string(i++);
            if(x.length()+ans>=n) break;
            ans+=x.length();
        }
        cout<<x[n-ans-1]<<endl;
    }
}
