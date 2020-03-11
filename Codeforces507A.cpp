#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,j,i,k,x;
cin>>n>>k;
int a[n+3];
int b[n+3];
for(i=0;i<n;i++)
{
	cin>>a[i];
	b[i]=a[i];
}
sort(a,a+n);
int sum=0;
int cnt=0;
for(i=0;i<n;i++)
{
	if(sum+a[i]<=k)
	{
		sum+=a[i];
		cnt++;
	}
	else break;
}
cout<<cnt<<endl;

for(i=0;i<cnt;i++)
{
	for(j=0;j<n;j++)
	{
		if(a[i]==b[j] and b[j]!=-1)
		{
			cout<<j+1<<" ";
			b[j]=-1;
			break;
		}
	}
}
}

