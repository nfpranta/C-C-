#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,count=0,l;
    char a[102];
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++){
        if(a[i]>='A' && a[i]<='Z') count++;
    }
    if(count<=l/2){
        for(i=0;i<l;i++){
                    if(a[i]>='A' && a[i]<='Z') {
                        a[i]+=32;
                    }
                    }
    }
    else {
        for(i=0;i<l;i++){
                    if(a[i]>='a' && a[i]<='z') {
                        a[i]-=32;
                    }
                    }
    }
    printf("%s\n",a);
}
