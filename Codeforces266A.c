#include<stdio.h>
int main()
{

    int i,n,count=0;
    scanf("%d",&n);
   char ch[1000];
   scanf("%s",ch);
   for(i=0;i<n-1;i++){
    if(ch[i]==ch[i+1]) count++;
}
    printf("%d\n",count);
   }

