#include<stdio.h>
int  main()
{
    long long n,m,x;
    scanf("%I64d%I64d",&n,&m);
    if(n%2==0){
        x=(n/2);
    }
    else x=(n/2)+1;
    if(x>=m) printf("%I64d\n",2*m-1);
    else printf("%I64d\n",(m-x)*2);

}
