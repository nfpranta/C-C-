#include<bits/stdc++.h>
using namespace std;
int a[502][502];
int main()
{
    int b,m,i,j,cnt=0,n,k,sum=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++) cin>>a[i][j];
    }
    for(i=n-1;i>1;i--)
    {
        for(j=m-1;j>1;j--)
        {
            if(a[i][j]==0) a[i][j]=min(a[i][j+1],a[i+1][j])-1;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++) {
            cnt+=a[i][j];
        if(i!=n && a[i][j]>=a[i+1][j] || j!=m && a[i][j]>=a[i][j+1])
            {
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    cout<<cnt<<endl;
}
