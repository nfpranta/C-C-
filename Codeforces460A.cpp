#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,sum=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++){
        sum++;
        if(sum%b==0) sum++;
    }
    printf("%d\n",sum);
}
