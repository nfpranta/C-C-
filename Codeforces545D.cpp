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
int sum[1000000];
main()

{
	int i,j,k,n,m;
	cin>>n;
	int a[n+3];
	for(i=1;i<=n;i++) cin>>a[i];
	int cnt=0;
	sort(a+1,a+n+1);
	bool flag=0;
	for(i=1;i<=n;i++)
	{
		flag=0;
		if(sum[i-1]<=a[i])
		{
			cnt++;
			sum[i]+=sum[i-1]+a[i];
			flag=1;
		}
		if(!flag) sum[i]+=sum[i-1];
	}
	cout<<cnt<<endl;
}
