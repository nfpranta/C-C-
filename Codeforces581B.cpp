#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ff first
#define ss second
int a[100009];
int main()
{
    int i,j,m,n,t,k;
    cin>>n;
    int ma=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
     int sum=0;
     int b[100009];
    for(i=n-1,j=0;i>=0;i--)
    {
        if(a[i]>ma)
           {
               ma=a[i];
               b[j++]=0;
               continue;
           }
            else {
               b[j++]=ma-a[i]+1;
            }
    }
    for(i=n-1;i>=0;i--) cout<<b[i]<<" ";
    cout<<endl;
}

