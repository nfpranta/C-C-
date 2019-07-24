#include<bits/stdc++.h>
using namespace std;
int main()
{
    typedef long long int ll;
    ll a,b,c,sum=0;
    int i,n;
    cin>>n;
    for(i=0;i<n;++i){
        cin>>a>>b>>c;
        sum=a+b+c;
        sum/=2;
        cout<<sum<<endl;;
    }
}
