#include<stdio.h>
int main()
{
    int x,n,i,sum=0,c=0,j=0;
    scanf("%d%d",&x,&n);
    int a[10000],b[10000];
    for(i=0;i<n;i++){
        scanf("%d%d",&a[i],&b[i]);
    }
   for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
                b[i]=b[j]+b[i];
                b[j]=b[i]-b[j];
                b[i]=b[i]-b[j];
            }
        }
   }
   for(i=0;i<n;i++){
    if(x>a[i]) c++;
       x+=b[i];
   }
   if(c==n) printf("YES\n");
    else printf("NO\n");
}
