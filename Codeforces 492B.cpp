#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int m,l,i,ma=0;
   double c,d,e,s=0;
   scanf("%I64d%I64d",&m,&l);
   int a[100002];
   for(i=0;i<m;i++){
        scanf("%d",&a[i]);
   }
   sort(a,a+m);
   for(i=0;i<m-1;i++){
    if(a[i+1]-a[i]>ma) ma=a[i+1]-a[i];
   }
   c=ma/2.0;
   d=a[0]-0.0;
   e=(double)l-a[m-1];
   s=max(c,d);
   s=max(s,e);
   printf("%.10lf\n",s);
   }
