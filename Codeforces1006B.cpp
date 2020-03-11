#include<bits/stdc++.h>
using namespace std;//incomplete
int main()
{
    int n,k,i,j,cnt=0;
    cin>>n>>k;
    int a[n+1];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(i=n-1;i>=n-k;i--)
    {
        cnt+=a[i];
    }
    cout<<cnt<<endl;
    int t=n/k;
    int sum=0;
    if(n%2==0 && k%2==0 || n%2==1 && k%2==1)
    {
        for(i=0;i<k-1;i++) sum+=t,cout<<t<<" ";
        cout<<n-sum<<endl;
    }
    else if(n%2==1 && k%2==0)
    {
        for(i=0;i<k-1;i++) cout<<t<<" ";
        cout<<t+1<<endl;
    }
    else if(n%2==0 && k%2==1)
    {
        for(i=0;i<k-1;i++) cout<<t+1<<" ";
        cout<<t<<endl;
    }
}
