#include<stdio.h>
int main()
{
    int a[102],j,i,sum=0,n,count=0,max=0,ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    sum/=2;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                max=a[i];
                a[i]=a[j];
                a[j]=max;
            }
        }
    }
    while(ans<=sum){
        ++count;
        ans+=a[n-count];
    }

    printf("%d\n",count);
}
