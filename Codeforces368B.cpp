#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
int i,j,k,l,n,m;
cin>>n>>m;
int x[n+5];
int b[m+2];
set<int>s;
map<int,int>distinct;
for(i=1;i<=n;i++)
{
    cin>>x[i];
}
for(i=n;i>=1;i--)
{
    s.insert(x[i]);
    distinct.insert({i,s.size()});
}
for(i=1;i<=m;i++) cin>>b[i];
for(i=1;i<=m;i++){
    cout<<distinct[b[i]]<<endl;
}
}


