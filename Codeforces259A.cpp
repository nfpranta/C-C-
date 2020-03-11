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
string x;
bool flag=0;
for(i=0;i<8;i++)
{
	cin>>x;
	for(j=0;j<7;j++)
	{
		if(x[j]==x[j+1]) flag=1;
	}
}
if(flag) cout<<"NO"<<endl;
else cout<<"YES"<<endl;
}
