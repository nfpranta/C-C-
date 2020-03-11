#include<bits/stdc++.h>
using namespace std;
#define int long long int
 main()
{
    int n,k,i,j;
    cin>>n>>k;
    int a[n+4];
    memset(a,0,sizeof(a));
    int cnt=0;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]+=a[i-1];
    }
    sort(a+1,a+n);
    cnt=k*a[n];
    for(i=1;i<=k-1;i++)
    {
        cnt-=a[i];
    }
    cout<<cnt<<endl;
}
