#include<stdio.h>
int main()
{
    int i,j,sum,t;
    int n,n1,n2;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&n1);
        int r1,r2,h,s=0,t;
        sum=0,s=0;
        h=n1;
        while(h!=0){
            int r=h%10;
            s+=r;
            h/=10;
        }
         t=s;
        while(t!=0){
            r1=t%10;
            sum=sum*10+r1;
            t/=10;
        }
         if(s==sum) printf("YES\n");
            else printf("NO\n");
}
}

