#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l;
    char a[102]={0},b[102],c[102]={0};
    scanf("%s",a);
    l=strlen(a);
    scanf("%s",b);
    for(i=0;i<l;i++){
        if(a[i]!=b[i]) c[i]='1';
            else c[i]='0';
    }
    printf("%s\n",c);
}
