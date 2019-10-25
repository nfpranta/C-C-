#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[3002],b[3002];
int main()
{
    ll i,j,n,t,mi1,mi2,ans=1e10;
    cin>>n;
   for(i=0;i<n;i++) cin>>a[i];
     for(i=0;i<n;i++) cin>>b[i];
     for(i=0;i<n;i++)
     {
         mi1=1e10,mi2=1e10;
           for(j=0;j<i;j++)
         {
             if(a[j]<a[i]) mi1=min(mi1,b[j]);
         }
         for(j=i+1;j<n;j++)
         {
             if(a[i]<a[j]) mi2=min(mi2,b[j]);
         }
         ans=min(ans,mi1+mi2+b[i]);
     }
     if(ans!=1e10) cout<<ans<<endl;
     else cout<<-1<<endl;
}
