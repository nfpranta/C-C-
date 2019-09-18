#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,a,b,c;
    cin>>x>>y>>z;
    cin>>a>>b>>c;
    if(x>a)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    a-=x;
    if(y>a+b)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    while(a!=0 && y!=0)
    {
        a--;
        y--;
    }
    while(y!=0 && b!=0)
    {
        y--;
        b--;
    }
    int sum=0;
    sum+=a+b+c;
    if(sum>=z){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }

}
