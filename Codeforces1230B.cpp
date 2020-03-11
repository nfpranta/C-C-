#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
    string x;
    cin>>n>>k;
    cin>>x;
    if(n==1)
    {
       if(k) cout<<0<<endl;
       else cout<<x<<endl;
       return 0;
    }
    if(k){
    if(x[0]!='1')
    {
        x[0]='1';
        k--;
    }
    }
    for(i=1;i<n && k;i++)
    {
        if(x[i]!='0')
        {
            x[i]='0';
            k--;
        }
    }
    cout<<x<<endl;
}
