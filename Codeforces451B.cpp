#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,cnt=0,x=1,y=1,cnt1=0,z=0,v,c2=0;
    cin>>n;
    int a[n+2];
    int b[n+2];
    bool flag=0;
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=1;i<=n;i++) b[i]=a[i];
    sort(b+1,b+n+1);
for(i=1;i<=n;i++) {
        if(a[i]!=b[i]){
            x=i;
            break;
        }
}
for(i=n;i>=1;i--)
{
    if(a[i]!=b[i])
    {
        y=i;
        break;
    }
}
z=y;
for(i=x;i<=y;i++)
{
    if(a[i]!=b[z])
    {
        cout<<"no"<<endl;
        return 0;
    }
    z--;
}
cout<<"yes"<<endl;
cout<<x<<" "<<y<<endl;
}

