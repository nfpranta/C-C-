#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll i,j,n,m;
    cin>>n;
    ll a[n+2];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]%2) cout<<a[i]<<" ";
        else cout<<a[i]-1<<" ";
    }
    cout<<endl;
}
