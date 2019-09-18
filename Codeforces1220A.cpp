#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,cnt=0,z=0;
    string x;
    cin>>n;
    cin>>x;
    if(n==1 || n==2){
        cout<<0<<endl;
        return 0;
    }
    for(i=0;i<n;i++)
    {
        if(x[i]=='z') z++;
    }
    cnt=(n-z*4)/3;
    for(i=0;i<cnt;i++)
    {
        cout<<1<<" ";
    }
    for(i=0;i<z;i++)
    {
        cout<<0<<" ";
    }
    cout<<endl;
}
