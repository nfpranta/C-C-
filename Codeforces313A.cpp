#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,l;
    int i,j;
    scanf("%lld",&n);
    if(n>=0) {
        printf("%lld\n",n);
        return 0;
    }
    else {
            n*=-1;
        a=n%10;
        b=(n%100)/10;
        if(a<b && n%10!=0){
            l=n/10;
            l-=b;
            l+=a;
        printf("%lld\n",l*-1);
        }
      else if(a<b && n%10==0){
            l=n/10;
            l-=b;
        printf("%lld\n",l*-1);
        }
else {
            b=n/10;
            printf("%lld\n",b*-1);
        }
    }
}
