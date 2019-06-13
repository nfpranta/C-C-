#include<stdio.h>
#include<string.h>
int main()
{
    char a[100000]={0};
    char b[]={'h','e' ,'l', 'l' ,'o'};

    int i,j,l,count=0,m=0,n=0;
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<5 ;i++){
        for(j=m;m<l;){
            if(b[i]==a[m]){
                count++;
                m++;
                break;
                }
                m++;
}
}
    if(count==5) printf("YES\n");
    else printf("NO\n");
}
