#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define ff first
#define ss second
bool checkbit(int n,int i)
{
	return (n&(1<<i));
}
 main()
{
  int n,m,k,i,j;
  cin>>n>>m>>k;
  int a[m+3];
  for(i=0;i<=m;i++)
  {
  	cin>>a[i];
  }
  int cnt=0;
  for(i=0;i<m;i++)
  {
  	  int s=a[i]^a[m];
  	  int c=0;
  	  for(j=0;j<n;j++)
	  {
	  	if(checkbit(s,j)) c++;
	  }
	  if(c<=k) cnt++;
  }
  cout<<cnt<<endl;
}
