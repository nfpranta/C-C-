#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll x,ll y){
return (y!=0)?gcd(y,x%y):x;
 }
int main()
{
    ll n,i,j,k,x,p,cnt=0;
   cin>>n;
    ll a[n];
  for(i=0;i<n;i++){
           cin>>a[i];
           }
       p=a[0];
    for(i=1;i<n;i++){
        p=gcd(p,a[i]);
    }
    cnt=0;
    for(i=1;i<=sqrt(p);i++){
      if(p%i==0){
        if(p/i==i){
            cnt++;
        }
        else cnt+=2;
    }
    }
    cout<<cnt<<endl;
}
