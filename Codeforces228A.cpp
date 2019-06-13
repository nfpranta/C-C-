#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[5];
    int cnt=0,i;
    for(i=0;i<4;i++){
        scanf("%I64d",&a[i]);
    }
    sort(a,a+4);
    for(i=0;i<3;i++){
            if(a[i]==a[i+1]) cnt++;
}
printf("%d\n",cnt);
}
