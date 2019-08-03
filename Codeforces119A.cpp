#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
if(b==0) return a;
else return gcd(b,a%b);

}
int main()
{
int a,b,n,i=1,j,s,x,cnt=0;
cin>>a>>b>>n;
while(1){
    cnt++;
    s=gcd(a,n);
    n-=s;
    if(!n) break;
     cnt++;
    x=gcd(b,n);
    n-=x;
    if(!n) break;
}
if(cnt%2) cout<<0<<endl;
else cout<<1<<endl;
}
