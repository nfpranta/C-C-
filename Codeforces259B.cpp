#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int
#define f first
#define s second
int sum[4];
main()
{
int n,m,k,s,t;
int i,j;
int mat[4][4];
for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++) cin>>mat[i][j];
}
int total=0;
for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++)
	{
		sum[i]+=mat[i][j];
		total+=mat[i][j];
	}
}
total/=2;
mat[1][1]=total-sum[1];
mat[2][2]=total-sum[2];
mat[3][3]=total-sum[3];
for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++) cout<<mat[i][j]<<" ";
	cout<<endl;
}
}
