#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll gcd(ll a,ll b){
if(!a){
    return b;
}
 return gcd(b%a,a);
}

ll sum(ll a,ll b){
    ll sum=0,i;
ll n=gcd(a,b);
for(i=1;i<=sqrt(n);i++){
    if(!(n%i)){
        if(n/i==i){
            sum+=i;
        }
        else {
            sum+=(n/i)+i;
        }
    }
}
return sum;
}
int main()
{
    long long int a,b;
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
}
