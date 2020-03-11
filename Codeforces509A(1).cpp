#include<bits/stdc++.h>
using namespace std;
int a[12][12];
int cnt;
int func(int row,int col)
{
    if(a[row][col]!=0) return a[row][col];
   // cnt++;
    if(row==1 or col==1) return 1;
     return  a[row][col]=func(row-1,col)+func (row,col-1);
}
main()
{
   int n,i,j,sum=1;
   cin>>n;
   for(i=1;i<=n;i++) a[1][n]=1;
    func(n,n);
   cout<<a[n][n]<<endl;
  // cout<<cnt<<endl;
}
