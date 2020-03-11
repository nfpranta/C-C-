#include<bits/stdc++.h>
using namespace std;
#define int long long int
 main()
{
    int t,i,j,n,k,cnt=0,r;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n>>k;
        while(n>0)
        {
            r=n%k;
            n/=k;
            if(r==0) cnt++;
            else cnt+=r+1;
        }

       cout<<cnt-1<<endl;
}
}
