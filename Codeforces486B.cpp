#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int
#define f first
#define s second
int a[101][101];
int b[101][101];
int c[102][103];
main()
{
int n,m,k,s,t,x,y,l;
int i,j;
cin>>n>>m;
int cnt=0;
for(i=1;i<=n;i++)
{
	for(j=1;j<=m;j++) b[i][j]=1;
}
for(i=1;i<=n;i++)
{
	for(j=1;j<=m;j++) {
			cin>>a[i][j];
		  if(a[i][j]==0)
		  {
		  	for(k=1;k<=n;k++) b[k][j]=0;
		  	for(k=1;k<=m;k++) b[i][k]=0;
		  }
	}
}
for(i=1;i<=n;i++)
{
	for(k=1;k<=m;k++)
	{
		        	cnt=0;
		      if(a[i][k]==1) {
				for(j=1;j<=m;j++) if(b[i][j]==1) cnt++;
		        for(j=1;j<=n;j++) if(b[j][k]==1) cnt++;
		        if(!cnt) break;
	}
}
if(k<=m) break;
}
//cout<<i<<" "<<k<<endl;
if(i<=n) cout<<"NO"<<endl;
else
{
	cout<<"YES"<<endl;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++) cout<<b[i][j]<<" ";
		cout<<endl;
	}
}
}
