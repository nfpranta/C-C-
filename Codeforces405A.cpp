#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i,a[1002];
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
sort(a,a+n);
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
printf("\n");
}
