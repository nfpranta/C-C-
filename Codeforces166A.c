#include<stdio.h>
int main()
{
    int n,a,b,i,min1=0,max=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
      min1=b-a+k;
      k=min1;
if(min1>max) max=min1;
    }
 printf("%d\n",max);

}

