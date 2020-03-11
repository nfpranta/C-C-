#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define INF 1e9+100
#define pii pair<int,int>
#define pss pair<string,string>
#define ff first
#define ss second
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define urs(r...)               typename decay<decltype(r)>::type
#define FOR(i,b) for(urs(b) i=0;i<b;i++)
#define REP(i,n) for(i=1;i<=n;i++)
#define ROF(i,a,b) for(urs(b) i=a;i>=b;i--)
#define pb push_back
main()
{
	int n,i,j,k;
	int m;
	int x,y;
	cin>>x>>y;
	cin>>n;
	int a[]={x,y,y-x,-x,-y,x-y};
	 m=a[(n-1)%6];
	cout<<(m%mod+mod)%mod<<endl;
	//cout<<m<<endl;
	//cout<<m%mod<<endl;
}
