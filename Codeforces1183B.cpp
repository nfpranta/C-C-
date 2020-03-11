#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define ff first
#define ss second
 main()
{
int i,j,n,k,t;
cin>>t;
while(t--)
{
	cin>>n>>k;
	int a[n+3];
     for(i=0;i<n;i++) cin>>a[i];
     int mn=*min_element(a,a+n);
     int ans=mn+k;
     bool flag=0;
     for(i=0;i<n;i++)
	 {
	 	if(a[i]!=ans)
		{
			if(abs(a[i]-ans)>k)
			{
				flag=1;
				break;
			}
		}
	 }
	 if(flag) cout<<-1<<endl;
	 else cout<<ans<<endl;
}
}
