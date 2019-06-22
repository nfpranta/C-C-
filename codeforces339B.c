#include<stdio.h>
int main()
{
   long long int m,n,i,s=0;
    int a[100002];
    scanf("%I64d%I64d",&m,&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    s=a[0]-1;
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]) s+=m+a[i+1]-a[i];
        else s+=a[i+1]-a[i];
    }
    printf("%I64d\n",s);

}
