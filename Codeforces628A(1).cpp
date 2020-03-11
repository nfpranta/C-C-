#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define INF 1e9+100
#define pair<int,int> pii
#define ff first
#define ss second
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define FOR(i,n) for(i=0;i<n;i++)
#define REP(i,n) for(i=1;i<=n;i++)
#define pb push_back
main()
{
 int n,b,p;
 int i,j,k;
 cin>>n>>b>>p;
 int m=n;
 int ans=0;
 int x=0;
 int y=n*p;
 while(m!=1)
 {
 	for(i=0;i<30;i++)
	{
		if(m<(1<<i)) break;
		k=(1<<i);
	}
	x+=(k*b);
	x+=(k/2);
	m=m-k;
	m+=(k/2);
 }
 cout<<x<<" "<<y<<endl;
}
