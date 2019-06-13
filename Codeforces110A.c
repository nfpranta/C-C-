#include<stdio.h>
int main()
{
    long long int n,i,r,count=0;
    scanf("%l64d",&n);
    while(n!=0){
        r=n%10;
         if(r==7|| r==4) count++;
        n/=10;
        }
    if(count==4 || count==7) printf("YES\n");
    else printf("NO\n");
}
