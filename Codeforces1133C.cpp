#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
//#define int long long int
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
/*main()
{
	int n,i,j,k,m;
	cin>>n;
	int a[n+3];
	rep(i,n)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int cnt=0;
	int mx=1;
    for(i=1,j=1;j<=n;)
	{
		if(a[j]-a[i]<=5)
		{
			mx=max(mx,j-i+1);
			j++;
		}
		else
		{
			i++;
			mx=max(mx,j-i);
		}
	}
	cout<<mx<<endl;
}*/
/*main()
{
	int i,j,k,n,m;
	cin>>n;
	int a[n+4];
	fi(i,n)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int ans=0;
	int cnt=0;
	fi(i,n)
	{
		ans=max(ans,upper_bound(a,a+n,a[i]+5)-lower_bound(a,a+n,a[i]));
	}
	cout<<ans<<endl;
}*/
main()
{
	int i,j,k,n,t;
	cin>>n;
	int a[n+2];
	map<int,int>cnt;
    set<int>s;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		cnt[a[i]]++;
		s.insert(a[i]);
	}
	int c=0;
	int ans=0;
	int mx=-1;
	for(auto v : s)
	{
		c=cnt[v];
		for(i=1;i<=5;i++) c+=cnt[v+i];
		ans=max(ans,c);
	}
	cout<<ans<<endl;
}


