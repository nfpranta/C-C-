#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,k1,k2,n,i,j,cnt=0;
    cin>>a1>>a2>>k1>>k2>>n;
    int mi,ma;
     int k=(a1*k1+a2*k2)-(a1+a2);
   //  cout<<k<<endl;
     if(k<n)
     {
         mi=n-k;
     }
     else {
        mi=0;
     }
     if(k1<k2)
     {
         if(n<=k1*a1)
         {
             ma=n/k1;
         }
         else {
            ma=a1;
            n-=k1*a1;
            ma+=(n/k2);
         }
     }
     else {
        if(n<=k2*a2)
        {
            ma=n/k2;
        }
        else {
            ma=a2;
            n-=k2*a2;
            ma+=(n/k1);
        }
     }
     cout<<mi<<" "<<ma<<endl;

}
