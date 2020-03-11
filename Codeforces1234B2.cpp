#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mx 1000010
#define pb push_back
#define pf push_front
#define pp pop_back
#define speedforce ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
    speedforce
    ll i,j,t,k;
    int n,m;
    ll x;
    map<ll,ll>a;
    deque<ll>b;
      a.clear();
    b.clear();
   scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&x);
        if(!a[x])
        {
            b.pf(x);
            if(b.size()>m)
            {
                int y=b.back();
                a[y]=0;
                b.pp();
            }
               a[x]=1;
        }
    }
    int len=b.size();
    printf("%d\n",len);
    for(auto it=b.begin();it!=b.end();it++)
    {
        printf("%d ",*it);
    }
  printf("\n");

    b.clear();
}


