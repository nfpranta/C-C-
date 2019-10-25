#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
#define eps 1e-7
main()//check the earlier approach
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    long double i,j,n,t,r1,r2;
    cin>>n>>t;
     r1=t*log(n);
     r2=n*log(t);
    //  cout<<r1<<" "<<r2<<endl;
    if(r1-r2>eps) cout<<">"<<endl;
    else if(r2-r1>eps) cout<<"<"<<endl;
    else cout<<"="<<endl;
}
