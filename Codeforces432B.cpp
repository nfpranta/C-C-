#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pii pair<int,int>
#define dis first
#define node second
#define mx 100007
int cnt[mx];
main()
{
	int i,j,k,n,t;
	cin>>n;
	int a[n+4],b[n+4];
	int hom[n+3],away[n+4];
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		hom[i]=n-1;
		away[i]=0;
		cnt[a[i]]++;
	}
	for(i=0;i<n;i++)
	{
		hom[i]+=cnt[b[i]];
		away[i]+=(2*(n-1))-hom[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<hom[i]<<" "<<away[i]<<endl;
	}
}
