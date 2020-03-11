#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,sum=0;
    cin>>n;
    int a[n+1],b[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    map<int,int>k;
    for(i=1;i<=n;i++)
    {
        b[i]=a[i];
    }
    sort(a+1,a+n+1,greater<int>());
    for(i=1;i<=n;i++)
    {
        sum+=(a[i]*(i-1))+1;
    }
    cout<<sum<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i]==b[j] && k[j]==0)
            {
                cout<<j<<" ";
                k[j]++;
                break;
            }

        }
    }
    cout<<endl;
}
