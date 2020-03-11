#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define ff first
#define ss second
 main()
{
	int i,j,n,k;
	cin>>n;
	int ans=n;
	while(1)
	{
		int m=ans;
		int sum=0;
		while(m)
		{
			int rem=m%10;
			sum+=rem;
			m/=10;
		}
		if(sum%4==0)
		{
			cout<<ans<<endl;
			return 0;
		}
		ans++;
	}
}
