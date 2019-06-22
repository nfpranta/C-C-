#include<stdio.h>
int main()
{
    int N,a,b,i,c,d;
    scanf("%d",&N);
    for(i=0; ; i++){
            N++;
    a=N/1000;
    b=(N/100%10);
    c=(N/10%10);
    d=N%10;
    if(a!=b&&a!=c&&a!=d  && b!=c&&b!=d  && c!=d ){
              break;
}
        }
        printf("%d\n",N);
        return 0;
}
