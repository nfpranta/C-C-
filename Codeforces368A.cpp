#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define int long long int
 main()
{
  int i,j,m,n,t,k1,k2,d,sum=0;
  cin>>n>>d;
  priority_queue<int,vector<int>,greater<int>>a;
  for(i=0;i<n;i++)
  {
      cin>>k1;
      a.push(k1);
  }
  cin>>m;
    if(m>n)
  {
      sum=(d*(n-m));
      m=n;
  }
 // cout<<sum<<endl;
  for(i=0;i<m;i++)
  {
      sum+=a.top();
     // cout<<sum<<" "<<1000<<endl;
      a.pop();
  }
  cout<<sum<<endl;
}


