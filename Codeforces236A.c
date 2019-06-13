#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100]={0},k;
    int i,l,j,count=0;
    scanf("%s",ch);
    l=strlen(ch);
    for(i=0;i<l-1;i++){
        for(j=i+1;j<l;j++){
            if(ch[i]>ch[j]) {
                    k=ch[i];
                     ch[i]=ch[j];
                     ch[j]=k;
        }
        }
    }
for(i=0;i<l;i++){
    if(ch[i]!=ch[i+1]) count++;
}
if(count%2==0) printf("CHAT WITH HER!\n");
else printf("IGNORE HIM!\n");


}

