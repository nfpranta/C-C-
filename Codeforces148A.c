#include<stdio.h>
int main()
{
    int a,b,c,d,e,i,count=0;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    for(i=1;i<=e;i++){
           if(i%a==0 || i%b==0 || i%c==0 || i%d==0) count++;
    }
    printf("%d\n",count);
}
