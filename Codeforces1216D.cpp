// Bismillahi Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,i,j,z,total;
    cin>>n;
    ll a[n+1];
    ll cnt[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll ma=a[n-1];
    total=n*ma;
    for(i=0;i<n;i++){
        cnt[i]=ma-a[i];
}
   ll mi=cnt[0];
    for(i=1;i<n;i++) mi=__gcd(mi,cnt[i]);
    ll y=0;
    for(i=0;i<n;i++)
        y+=(cnt[i]/mi);
    cout<<y<<" "<<mi<<endl;
}
