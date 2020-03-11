#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
int i,j,k,l,a,b,c;
cin>>a>>b>>c;
if(b<2 || c<3)
{
    cout<<0<<endl;
    return 0 ;
}
int x=min(a,min(b/2,c/4));
int sum=x+(x*2)+(x*4);
cout<<sum<<endl;
}


