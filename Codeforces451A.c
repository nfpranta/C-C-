#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    scanf("%d%d",&a,&b);
    for(; a!=0&&b!=0 ;){
        a--;
        b--;
        if(sum==0) sum=1;
        else sum=0;
    }
    if(sum==0) printf("Malvika\n");
    else  printf("Akshat\n");
}
