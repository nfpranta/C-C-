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
int sum[600000];
main()
{
	int i,j,k,n,m,t;
	int l,r;
	int cnt=0;
	int sum2=0;
	int ans=0;
	cin>>n;
	int a[n+3];
	for(i=1;i<=n;i++) cin>>a[i];
	for( i=1;i<=n;i++)
	{
		sum[i]=sum[i-1]+a[i];
	}
	int summation=sum[n]/3;
	//cout<<summation<<endl;
	if(sum[n]%3!=0)
	{
		cout<<0<<endl;
		return 0;
	}
	else
	{
		int repeat=2*(sum[n]/3);
		//cout<<summation<<" "<<repeat<<endl;
		for(i=1;i<n;i++)
		{
			if(sum[i]==repeat) ans+=cnt;
			if(sum[i]==summation) cnt++;
		}
		cout<<ans<<endl;
	}
}
