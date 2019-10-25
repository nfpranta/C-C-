#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a,b,c,d,m,n,e;
    cin>>n>>m>>a>>b;
    d=n%m;
    cout<<min(d*b,(m-d)*a)<<endl;
}
