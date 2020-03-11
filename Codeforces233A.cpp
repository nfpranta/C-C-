#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,t,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<int,int>a;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            a[x]=i;
        }
        int mn=a[1];
        int mx=a[1];
        for(i=1;i<=n;i++)
        {
            mn=min(a[i],mn);
            mx=max(a[i],mx);
            if(mx-mn+1==i) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }

}
