#include<bits/stdc++.h>
using namespace std;
const int mx=0x3f3f3f3f;
int main()
{
    int i,j,n,m,k,p,q,r;
    string x,y;
    char t,z;
    cin>>x>>y;
    int a[27][27];
    if(x.size()!=y.size())
    {
        cout<<-1<<endl;
        return 0;
    }
    memset(a,0x3f,sizeof(a));
    for(i=0;i<26;i++) a[i][i]=0;
    cin>>n;
    while(n--)
    {
        cin>>t>>z>>m;
        a[t-'a'][z-'a']=min(m, a[t-'a'][z-'a']);
    }
     for(k=0;k<26;k++)
     {
         for(i=0;i<26;i++)
         {
             for(j=0;j<26;j++)
             {
                 a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
             }
         }
     }
     int sum=0;
     for(i=0;i<x.size();i++)
     {
         if(x[i]==y[i]) continue;
         else {
            p=mx;
            q=0;
            for(j=0;j<26;j++)
            {
                if(p>a[x[i]-'a'][j]+a[y[i]-'a'][j])
                {
                    q=j;
                    p=a[x[i]-'a'][j]+a[y[i]-'a'][j];
                }
            }
            if(p!=mx)
            {
                sum+=p;
                x[i]='a'+q;
            }
            else {
                cout<<-1<<endl;
                return 0;
            }
         }
     }
       cout<<sum<<endl;
        cout<<x<<endl;
}
