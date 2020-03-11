#include<bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
  priority_queue<int>p;
  int i,j,m,n,t,x,y;
  cin>>n;
  int k1,k2,k;
  int a[n+2],b[n+2];
  cin>>k1>>k2;
  k=k1+k2;
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
   for(i=0;i<n;i++)
  {
      cin>>b[i];
  }
   for(i=0;i<n;i++)
  {
     p.push(abs(a[i]-b[i]));
  }
  while(k--)
  {
      x=p.top(),p.pop();
      p.push(abs(x-1));
  }
  int ans=0;
  while(!p.empty())
  {
      ans+=p.top()*(p.top());
      p.pop();
  }
  cout<<ans<<endl;

}
