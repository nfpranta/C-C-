#include<bits/stdc++.h>
using namespace std;
#define pb push_back
main()
{
 int i,j,n,k,l,w,h;
 cin>>w>>h;
 int ans=1;
 for(i=1;i<=w;i++)
 {
     ans=(ans*2)%998244353 ;
 }
 for(i=1;i<=h;i++)
 {
     ans=(ans*2)%998244353 ;
 }
 cout<<ans<<endl;
}
