#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5],i,sum=0;
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+3);
   sum= (a[0]+a[2])/2;
   sum=abs(sum-a[0])+abs(sum-a[2]);
   printf("%d\n",sum);
}
