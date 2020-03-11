#include<bits/stdc++.h>
using namespace std;
bool flag[1010];
int prime[1010];
int N=1000;
void sieve()
{
	int i,j;
	for(i=4;i<=N;i+=2) flag[i]=1;
	for(i=3;i*i<=N;i+=2)
	{
		if(flag[i]==0)
		{
			for(j=i*i;j<=N;j+=i)
			{
				flag[j]=1;
			}
		}
	}
	flag[1]=1;
	prime[0]=2;
	j=1;
	for(i=3;i<=N;i++)
	{
		if(flag[i]==0)
		{
	         prime[j++]=i;
		}
	}
}
int main()
{
	int i,j,n,k;
	cin>>n>>k;
	int cnt=0;
	sieve();
	for(i=0;prime[i]<=n;i++)
	{
		int x=prime[i]-1;
		for(j=0;prime[j]<=x/2;j++)
		{
			if(x-prime[j]==prime[j+1]) cnt++;
		}
	}
//	cout<<cnt<<endl;
	if(k<=cnt) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
