#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,k,i,j,cnt=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        int a[n+2];
        memset(a,0,sizeof(a));
        for(i=1;i<=n;i++) cin>>a[i];
        bool flag=0;
        for(i=1;i<n;i++)
        {
            if(a[i]==a[i+1])
            {
                m+=(min(a[i],k));
            }
            else if(a[i]<a[i+1])
            {
                j=max(0,a[i+1]-k);
                if(j>a[i]){
                m-=(j-a[i]);
                if(m<0)
                {
                    flag=1;
                    break;
                }
                }
                else {
                    m+=a[i]-j;
                }
            }
            else {
                m+=a[i]-max(0,a[i+1]-k);
            }
        }
        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
