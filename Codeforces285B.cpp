#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int
#define f first
#define s second
main()
{
int n,m,k,s,t;
int i,j;
cin>>n>>s>>t;
if(s==t)
{
	cout<<0<<endl;
	return 0;
}
int a[n+3];
for(i=1;i<=n;i++) cin>>a[i];
for(i=1;i<=n;i++)
{
	 s=a[s];
	 if(s==t)
	 {
	 	cout<<i<<endl;
	 	return 0;
	 }
}
cout<<-1<<endl;
}
