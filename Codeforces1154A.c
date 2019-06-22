#include<stdio.h>
int main()
{
   long long  int a,b,c,d,i,j,max=-1,max1,max2;
    scanf("%I64d%I64d%I64d%I64d",&a,&b,&c,&d);
    if(a>max) max=a;
    if(b>max) max=b;
    if(c>max) max=c;
    if(d>max) max=d;
   if(max!=a) printf("%I64d ",max-a);
    if(max!=b) printf("%I64d ",max-b);
        if(max!=c) printf("%I64d ",max-c);
        if(max!=d)printf("%I64d ",max-d);
printf("\n");
    }

