#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=0;i<b;i++){
        if(a%10==0) a/=10;
        else --a;
    }
    printf("%d\n",a);
}
