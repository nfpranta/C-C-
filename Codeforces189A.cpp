#include<bits/stdc++.h>
using namespace std;
int k=3;
 int value[4000];
int ready[4000];
 int INF=100000007;
int sol(int n,int x[],int k){
if(n<0) return -INF;
else if(n==0) return 0;
int i,best=-INF;
if(ready[n]) return value[n];
for(i=0;i<3;i++){
    best=max(best,sol((n-x[i]),x,k)+1);
}
ready[n]=1;
value[n]=best;
return value[n];
}
int main()
{

int n,a,b,c;
int x[3];
cin>>n>>a>>b>>c;
x[0]=a;
x[1]=b;
x[2]=c;
  cout<<sol(n,x,k)<<endl;
}
