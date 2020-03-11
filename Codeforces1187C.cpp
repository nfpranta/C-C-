#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long int
#define INF 1e9+100
#define pb push_back
#define pii pair<int,int>
#define ff first
#define ss second
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define fi(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define pb push_back
#define sz(x)   (int)x.size()
#define  debug(x)  cout<<#x<<" "<<x<<endl;
int par[100005];
int a[100006];
main()
{
	int i,j,k,n,m,t;
	int l,r;
	cin>>n>>m;
	for(i=1;i<=10000;i++) par[i]=i;
	for(i=1;i<=10000;i++)  a[i]=10000-i;
    vector<pii>bad;
	for(i=0;i<m;i++)
	{
		cin>>t>>l>>r;
		if(t==0)
		{
			bad.pb({l,r});
		}
		else{
	     par[l]=max(par[l],r);
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=par[i];j++)
		{
			a[j]=a[i];
		}
	}
	for(auto it : bad)
	{
		if(a[it.ss]==a[it.ff])
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	for(i=1;i<=n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
