#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int i,n,j,ans=0;
    cin>>n;
    while(n>0){
        ans+=n%2;
        n/=2;
    }
    cout<<ans<<endl;
}
