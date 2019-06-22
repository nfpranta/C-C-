#include<stdio.h>
int main()
{
    int n,a[1002]={0},i,cnt=0,x,y,j=0;
    scanf("%d",&n);
    scanf("%d",&x);
    for(i=0;i<x;i++)scanf("%d",&a[i]);
    scanf("%d",&y);
     for(j=0;j<y;i++,j++) scanf("%d",&a[i]);
    for(i=1;i<=n;i++){
        for(j=0;j<x+y;j++){
            if(a[j]==i) {
                    cnt++;
            break;
        }
    }
    }
if(cnt==n) printf("I become the guy.\n");
else  printf("Oh, my keyboard!\n");
}
