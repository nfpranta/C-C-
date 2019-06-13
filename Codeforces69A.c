#include<stdio.h>
int main()
{
    int a,b,c,n,i,j,x=0,y=0,z=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        x+=a;
        y+=b;
        z+=c;
    }
    if(x==0 && y==0 && z==0) printf("YES\n");
    else printf("NO\n");
}
