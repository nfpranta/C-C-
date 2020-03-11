#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int i,j,t;
    ll n,m,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        n/=m;
        ll sum=0,p,q,ex,cnt=0;
        for(i=1;i<=10;i++)
        {
            p=i*m;
            p%=10;
            cnt+=p;
        }
        ex=n%10;
        q=n/10;
        sum=q*cnt;
        for(i=1;i<=ex;i++)
        {
            p=i*m;
            p%=10;
            sum+=p;
        }
        cout<<sum<<endl;
    }
}
