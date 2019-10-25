#include<bits/stdc++.h>
using namespace std;
#define mx 10000
int flag[mx];
void sieve()
{
    int i;
    flag[1]=1;
    int sq=sqrt(mx);
    for(i=4;i<=mx;i+=2) flag[i]=1;
    for(i=3;i<=sq;i+=2)
    {
        if(flag[i]==0){
        for(int j=i*i;j<=mx;j+=2*i){
                flag[j]=1;
        }
    }
}
}
int main()
{
    sieve();
    int n,i,j,sum=0;
    cin>>n;
    int cnt[n+1]={0};
    for(i=2;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0 && flag[j]==0){
                    cnt[i]++;
            }
        }
          if(cnt[i]==2){
                sum++;
          }
    }
    cout<<sum<<endl;
}
