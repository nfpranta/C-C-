#include<stdio.h>
long long sum(long long n){
  long long t=0;
  int i;
    if(n%2==0) t=n/2;
    else t=-(n+1)/2;
    return t;
}
int main()
{
   long long i,n;
    scanf("%I64d",&n);
    printf("%I64d\n",sum(n));
}
