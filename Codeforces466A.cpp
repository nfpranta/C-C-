#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,i,x,y=0,z,sum=0;
    scanf("%d%d%d%d",&n,&c,&a,&b);
    if(c*a<=b) printf("%d\n",n*a);
    else printf("%d\n",(n/c)*b+min((n%c)*a,b));
}
