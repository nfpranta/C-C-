#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a,b,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        if(b-a>=2) count++;
    }
    printf("%d\n",count);
}
