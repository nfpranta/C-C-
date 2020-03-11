#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define speedforce ios_base::sync_with_stdio(0),cin.tie(0);
int main()
{
    speedforce
    int i,j,n,x,y,t,r,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&r);
         map<int,int>a;
         vector<int>b;
        for(j=0;j<n;j++)
        {
            scanf("%d",&x);
            a[x]=1;
        }
        for(auto it=a.begin();it!=a.end();it++)
        {
         b.pb(it->first);
        }
        sort(b.begin(),b.end());
        k=0;
        int sum=0,cnt=0;
       for(j=b.size()-1;j>=0;j--)
       {
           sum=b[j]+k;
           if(sum<=0) break;
           k-=r;
           cnt++;
       }
       printf("%d\n",cnt);
    }
}

