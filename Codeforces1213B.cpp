#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,t,cnt=0,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+2];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sum=a[n];
        cnt=0;
        for(i=n-1;i>=1;i--)
        {
            if(a[i]>sum) cnt++;
            sum=min(sum,a[i]);
        }
        cout<<cnt<<endl;
    }

}
