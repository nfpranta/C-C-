#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,k,i,j,y,z;
  double x1,x2,y1,y2,r;
  cin>>r>>x1>>y1>>x2>>y2;
  double dist=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
  dist=sqrt(dist);
  if(dist==0)
  {
  	cout<<0<<endl;
  	return 0;
  }
  //cout<<dist<<endl;
  int ans=dist/(2*r);
  if((ans*2*r)!=dist) ans++;
  cout<<ans<<endl;
}

