#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    long long int a[100007],f[100007];
    scanf("%d",&n);
    memset(a,0,sizeof(a));
    for(i=0;i<n;i++){
        scanf("%d",&j);
        a[j]++;
    }
    f[0]=0;
    f[1]=a[1];
    for(i=2;i<=100000;i++){
        f[i]=max(f[i-1],f[i-2]+i*a[i]);
    }
    printf("%I64d\n",f[100000]);
}
