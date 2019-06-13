#include<bits/stdc++.h>
using namespace std;
bool isprime(long long n){
if(n<2) return false;
else if(n==2) return true;
long long x=sqrt(n);
if(n%2==0) return false;
for(int i=3;i<=x;i+=2){
    if(n%i==0) return false;
}
return true;
}
int main()
{
    long long int i,j,n,x,y;
    scanf("%I64d",&n);
    for(i=0;i<n;i++){
        scanf("%I64d",&y);
      x=sqrt(y);
    if(x*x==y && isprime(x)==true) printf("YES\n");
    else printf("NO\n");
    }
}

