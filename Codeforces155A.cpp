#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000],i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int maxv=a[0];
    int minv=a[0];
    for(i=1;i<n;++i){
        if(maxv<a[i]){
            maxv=a[i];
            sum++;
        }
        else if(minv>a[i]) {
            minv=a[i];
            sum++;
        }
    }
    printf("%d\n",sum);
}
