#include<bits/stdc++.h>
using namespace std;
#define pb push_back
main()
{
    int n,i,j,k,l,m,sum=0,s=0;
    cin>>n;
    vector<int>v;
    int a[n+2];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(a[n-1]<a[0]/2)
    {
        cout<<0<<endl;
        return 0;
    }
    if(n==2 && a[0]>a[1])
    {
        if(a[0]>a[1]){
        cout<<1<<endl<<1<<endl;
        }
        else {
        cout<<0<<endl;
    }
        return 0;
    }
    m=a[0];
    bool flag=0;
    s+=m;
    v.pb(1);
    for(i=1;i<n;i++)
    {
        if((a[i]*2)<=m)
        {
            s+=a[i];
            v.pb(i+1);
        }
        if(s>sum/2)
        {
            flag=1;
            break;
        }
    }
    if(!flag) cout<<0<<endl;
    else {
        cout<<v.size()<<endl;
        for(i=0;i<v.size();i++)
        {
           cout<<v[i]<<" ";

        }
        cout<<endl;
    }

}
