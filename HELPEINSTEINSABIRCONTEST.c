#include<stdio.h>
int main()
{
    int m,n,i,j,cnt=0;
    scanf("%d",&m);
    scanf("%d",&n);
    int a[n];
    int sum=0;

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    a[i]=a[i]+a[j];
                    a[j]=a[i]-a[j];
                    a[i]=a[i]-a[j];
        }
            }
        }
        sum+=a[0];
        if(sum<=m) cnt++;
        for(i=1;i<n;i++){
                  sum+=a[i];
            if(sum>m) break;
              cnt++;
}
            if(cnt==n) printf("BRAVO\n");
            else if(cnt==0) printf("UNLUCKY\n");
            else printf("%d assignments done\n",cnt);
        }
