#include<stdio.h>
int main()
{
    int n,i,sum=0;
    char a[102];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",a);
        if(a[0]=='I') sum+=20;
        if(a[0]=='T') sum+=4;
        if(a[0]=='C') sum+=6;
        if(a[0]=='O') sum+=8;
        if(a[0]=='D') sum+=12;
    }
    printf("%d\n",sum);
}
