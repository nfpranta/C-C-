#include<bits/stdc++.h>
using namespace std;
#define int long long int
 main()
{
     int i,j,n,t,k;
     cin>>n;
     int a[n+1][n+2];
      for(i=1;i<=n;i++) for(j=1;j<=n;j++) cin>>a[i][j];
      for(k=1;k<=n;k++)
      {
          for(i=1;i<=n;i++)
          {
              for(j=1;j<=n;j++)
              {
                  a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
              }
          }
      }
      cin>>t;
      while(t--)
      {
          int sum=0;
          int u,v,cost;
          cin>>u>>v>>cost;
          for(i=1;i<=n;i++)
          {
              for(j=1;j<=n;j++)
              {
                  a[i][j]=min(a[i][j],min(a[i][u]+a[v][j]+cost,a[i][v]+a[u][j]+cost));
              }
          }
          for(i=1;i<=n;i++) for(j=i+1;j<=n;j++) sum+=a[i][j];
          cout<<sum<<" ";
      }
      cout<<endl;
}
