#include<bits/stdc++.h>
using namespace std;
int main()

{
    int a,b,s1=0,s2,i;
    scanf("%d%d",&a,&b);
    if(a<b){
        a=a^b;
        b=a^b;
        a=a^b;
    }
    s1+=a-b;
    s1/=2;
    printf("%d %d\n",min(a,b),s1);

}
