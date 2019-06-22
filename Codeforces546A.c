#include<stdio.h>
int main()
{
   int a,b,c,i,j,sum=0,difference=0;
    scanf("%d %d %d",&a,&b,&c);
    for(i=1;i<=c;i++){
        sum+=i*a;
    }
    if(sum>b){
    difference=sum-b;
    printf("%d\n",difference);
    }
    else printf("0\n");
}
