#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,cnt,ans=1e9,sum;
    int a[110];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(i=0;i<n;i++)
     {
         cnt=0;
         for(j=0;j<n;j++)
         {
             sum=abs(a[i]-a[j]);
             if(sum%2) cnt++;
         }
         ans=min(ans,cnt);
     }
     cout<<ans<<endl;
}
