#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,r=1;
   string x[]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };
   cin>>n;
   while(n>5*r){
    n-=r*5;
    r*=2;
   }
   n=n-1;
   n=n/r;
  cout<<x[n]<<endl;
}
