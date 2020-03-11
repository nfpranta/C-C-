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
	int n,sum=0,t,i;
	int cnt=0,s=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n+3];
		for(i=1;i<=n;i++) cin>>a[i];
		map<int,int>m;
		for(i=1;i<=n;i++)
		{
			m[a[i]]++;
		}
		priority_queue<int>q;
		for(auto it : m)
		{
			q.push(it.ss);
		}
		int cur=q.top();
		q.pop();
		int sum=cur;
		int ans;
		while(!q.empty())
		{
			ans=q.top();
			q.pop();
			if(ans>=cur)
			{
				sum+=(cur-1);
				cur--;
				if(cur==0) break;
			}
			else
			{
				sum+=ans;
				cur=ans;
			}
		}
		cout<<sum<<endl;
	}
}
