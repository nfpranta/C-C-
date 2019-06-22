#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==1) printf("I hate ");
            else printf("I love ");
        if(n==i) printf("it ");
        else printf("that ");
    }
    printf("\n");
}
