#include<stdio.h>
int main()
{
        int a[1000000],i,max=-1,b[10]={0},n;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
            if(a[i+1]>=a[i]) {
                    b[0]++;
            }
                else{
                    if(max<=b[0]) {
                            max=b[0];
                    b[0]=0;
                    }
}
}
        printf("%d\n",max+1);
}
