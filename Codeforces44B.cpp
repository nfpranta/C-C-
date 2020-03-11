#include<bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
	int n,a,b,c,i,j,k;
	cin>>n>>a>>b>>c;
	bool flag=0;
	int ans=0;
	for(i=0;i<=c;i++)
	{
		for(j=0;j<=b;j++)
		{
			int z=n-i*2-j;
			if(z>=0 and z*2<=a)
			{
				ans++;
				flag=1;
			}
		}
	}
	if(!flag) cout<<0<<endl;
	else cout<<ans<<endl;
}


