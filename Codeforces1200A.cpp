#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,h,k;
    cin>>n;
    string x;
    cin>>x;
    int a[13];
    memset(a,0,sizeof(a));
    j=0;k=9;
    for(i=0;i<n;i++){
    if(x[i]=='L')
    {
      for(j=0;j<10;j++)
      {
          if(a[j]==0)
          {
              a[j]=1;
              break;
          }
      }
    }
    else if(x[i]=='R')
    {
     for(j=9;j>=0;j--)
     {
         if(a[j]==0)
         {
             a[j]=1;
             break;
         }
     }
    }
    else {
       a[x[i]-'0']=0;
    }
    }
   for(i=0;i<10;i++) cout<<a[i];
   cout<<endl;
}
