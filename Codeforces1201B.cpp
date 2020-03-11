#include<bits/stdc++.h>
using namespace std;
#define int  long long int
main()
{
    int n,i,a,s=0,k=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        s+=a;
        k=max(k,a);
    }
    if(s%2==1 || s<k*2)
    {
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
}
