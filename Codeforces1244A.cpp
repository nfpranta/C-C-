#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b,c,d,e,j,y,p,q,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>e;
        p=a/c;
        q=b/d;
        if(a%c) p++;
        if(b%d) q++;
        if(p+q<=e) cout<<p<<" "<<q<<endl;
        else cout<<-1<<endl;
    }
}
