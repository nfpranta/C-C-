#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,k,i,j,y,z;
   cin>>n;
   string x;
   for(i=0;i<=n;i++)
   {
   	for(j=0;j<n;j++) x[j]=' ';
   	for(j=0;j<i;j++) x[j]=i-j+48-1;
   	for(j=n-1;j>=0;j--) cout<<x[j]<<" ";
   	cout<<i;
   	for(j=0;j<i;j++) cout<<" "<<x[j];
   	cout<<endl;
   }
   for(i=n-1;i>=0;i--)
   {
   	for(j=0;j<n;j++) x[j]=' ';
   	for(j=0;j<i;j++) x[j]=i-j+48-1;
   	for(j=n-1;j>=0;j--) cout<<x[j]<<" ";
   	cout<<i;
   	for(j=0;j<i;j++) cout<<" "<<x[j];
   	cout<<endl;
   }
}

