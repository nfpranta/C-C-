#include<bits/stdc++.h>
using namespace std;
#define int long long int
/* main()
{
	int n,i,j,k;
	int m;
	cin>>n>>m;
	if(m>=n)
	{
		cout<<n<<endl;
		return 0;
	}
	int ans=m+1;
	int temp=n;
	temp-=ans;
	while(temp>0)
	{
		temp+=m;
		ans++;
		temp-=ans;
	}
    cout<<ans<<endl;
} */
main()
{
	int lo=0;
	int hi=INT_MAX;
	int i,j,k,n,t,m;
	int mid;
	cin>>n>>m;
	int ans=0;
	if(m>=n)
	{
		cout<<n<<endl;
		return 0;
	}
	else
	{
		while(lo<=hi)
		{
			mid=(lo+hi)>>1;
			int l=(mid*(mid+1))/2;
			if(l>=(n-m))
			{
				ans=mid;
				hi=mid-1;
			}
			else
			{
				lo=mid+1;
			}
		}
		cout<<ans+m<<endl;
	}
}
