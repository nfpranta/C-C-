#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,sum=0;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++){
        sum+=5*i;
        if(240-sum<k) break;
    }
    printf("%d\n",i-1);

}
