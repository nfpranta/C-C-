#include<stdio.h>
#include<string.h>
int main()
{
    char a[102],b[102];
    scanf("%s %s",a,b);
    strrev(a);
    if(strcmp(a,b)==0){
        printf("YES\n");
    }
    else printf("NO\n");

}
