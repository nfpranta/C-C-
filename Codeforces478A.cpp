#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,sum=0,i,cnt=0;;
    cin>>a>>b>>c>>d>>e;
    sum+=a+b+c+d+e;
  if(a==0) cnt++;
  if(b==0) cnt++;
  if(c==0) cnt++;
  if(d==0) cnt++;
  if(e==0) cnt++;
  if(cnt==5)
  {
      cout<<-1<<endl;
      return 0;
  }
    if(sum%5)
    {
        cout<<-1<<endl;
    }
    else {
        cout<<sum/5<<endl;
    }
}
