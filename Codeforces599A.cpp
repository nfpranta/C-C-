#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,i,j,a,b,c;
    cin>>a>>b>>c;
    if(a+b<c)
    {
        cout<<a*2+b*2<<endl;
    }
    else if(b+c<a)
    {
         cout<<b*2+c*2<<endl;
    }
    else if(a+c<b)
    {
        cout<<a*2+c*2<<endl;
    }
    else {
        cout<<a+b+c<<endl;
    }
}
