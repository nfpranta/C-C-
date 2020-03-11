#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
main()
{
    int n,i,j,k,a;
    int cnt=0;
    cin>>n;
    int ara[n+2];
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a>=0) a=-a-1;
        ara[i]=a;
        if(a<0) cnt++;
    }
    if(cnt%2==0)
    {
        for(i=0;i<n;i++) cout<<ara[i]<<" ";return 0;
    }
    pair<int,int>p[n];
    for(i=0;i<n;i++)
    {
        p[i]={ara[i],i};
    }
    sort(p,p+n);
    if(p[0].ff==-1 && p[n-1].ff==-1)
    {
        for(i=0;i<n;i++)cout<<0<<" "; return 0;
    }
    int temp=p[0].ss;
    ara[temp]=-ara[temp]-1;
    for(i=0;i<n;i++) cout<<ara[i]<<" "; return 0;
}
