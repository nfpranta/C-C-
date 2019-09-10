#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,t,i,j=-1,cnt=0,sum=0;
    cin>>n>>t;
    ll a[n+1];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
  for(i=0;i<n;i++){
        if(sum+a[i]<=t){
    sum+=a[i];
        }
       else {
        sum+=a[i];
        while(sum>t)
        {
            j++;
            sum-=a[j];
        }
       }
       cnt=max(cnt,i-j);
  }
  cout<<cnt<<endl;
}
