#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,j,a[100000];
    scanf("%d%d",&n,&x);
    for(i=0;i<n-1;i++) scanf("%d",&a[i]);
    for(i=0;i<n-1;){
            i+=a[i];
        if(i==(x-1)) {
         printf("YES\n");
         return 0;
    }
}
printf("NO\n");
}
