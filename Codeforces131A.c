#include<stdio.h>
#include<string.h>
int main()
{
    char a[102];
    int i,l,count=0;
    scanf("%s",a);
    l=strlen(a);
   if(a[0]>='a'){
        for(i=1;i<l;i++){
            if(a[i]>='A'&&  a[i]<='Z')  count++;
   }
    if(l-1==count){
            a[0]-=32;
        for(i=1;i<l;i++) a[i]+=32;
    }
   }
 else if(a[0]<='Z'){
            for(i=0;i<l;i++){
        if(a[i]>='A' && a[i]<='Z') count++;
    }
    if(count==l){
        for(i=0;i<l;i++) a[i]+=32;
    }
 }

  printf("%s\n",a);
}

