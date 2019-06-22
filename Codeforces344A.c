#include<stdio.h>
int main()
{
    int n,i,cnt=0;
    int a[100002];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        if(a[i]!=a[i+1]) cnt++;
    }
    printf("%d\n",cnt+1);
}
