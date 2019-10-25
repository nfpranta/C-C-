#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,i,j,k,ans=1;
    cin>>n>>k;
    while(k%2==0)
    {
        k/=2;
        ans++;
    }
    cout<<ans<<endl;
}
