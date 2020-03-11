#include<bits/stdc++.h>
using namespace std;
#define int long long int
int par[3000000];
int rnk[300000];
main()
{
   int n,i,j,k;
   map<pair<string,string>,vector<int>>p;
   cin>>n;
   string x,y;
    for(i=1;i<=n;i++)
	{
		cin>>x>>y;
		p[{x,y}].push_back(i);
	}
	int cnt=0;
	for(auto u : p)
	{
		cnt++;
	}
	cout<<cnt<<endl;
}
