#include<bits/stdc++.h>
using namespace std;
#define int long long int
int a[200013];
main()
{
    int i,j,n,k,t,ans,temp;
    int mi=LLONG_MAX;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        mi=LLONG_MAX;
        for(i=1;i<=n;i++) cin>>a[i];
        for(i=1;i+k<=n;i++)
        {
            int temp=a[i+k]-a[i];
            if(temp<mi)
            {
                mi=temp;
                ans=temp/2+a[i];
            }
        }
        cout<<ans<<endl;
    }
}


