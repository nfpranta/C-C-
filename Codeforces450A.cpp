#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pi 2*acos(0.0)
#define f first
#define s second
#define pb push_back
#define gap ' '
#define fastio {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define mod 1000000007
#define INF 1e9+100
int a[1003];
int ans[1003];
 main()
{
	int n,i,j,k,l,v,sum=0;
	cin>>n>>k;
     queue<int>q;
     int mx=-1;
     for(i=1;i<=n;i++) {
			cin>>a[i];
			q.push(i);
     }
     int last=0;
     while(!q.empty())
	 {
	 	last=q.front();
	 	q.pop();
	 	ans[last]+=k;
	 	if(ans[last]<a[last])
		{
			q.push(last);
		}
	 }
	 cout<<last<<endl;

}
