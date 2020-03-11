#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[10000];
#define mx 1000010
int main()
{
    int n,i,j,m,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
     cin>>n;
     memset(a,0,sizeof(a));
       ll s=0;
     for(j=0;j<n;j++) {
            cin>>a[i];
            s+=a[i];
     }
      if(s%n==0)cout<<s/n<<endl;
      else cout<<s/n+1<<endl;
    }
}
