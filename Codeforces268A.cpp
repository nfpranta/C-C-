#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[102],b[102],cnt=0;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++){
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
        if(a[i]==b[j]) cnt++;
    }
    }
     for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
        if(b[i]==a[j]) cnt++;
    }
    }
    printf("%d\n",cnt);
}
