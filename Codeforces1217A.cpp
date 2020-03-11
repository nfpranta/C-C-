#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll i,j,n,q,s,e,t,ans;
    cin>>t;
    while(t--)
    {
        cin>>s>>i>>e;
        if(s+e<=i)
        {
            cout<<0<<endl;
            continue;
        }
        ll lo=0,hi=e,mid;
        while(lo<=hi)
        {
            mid=(lo+hi)>>1;
            if(s+e-mid>i+mid)
            {
                ans=mid;
                lo=mid+1;
            }
            else hi=mid-1;
        }
        cout<<ans+1<<endl;
    }
}
