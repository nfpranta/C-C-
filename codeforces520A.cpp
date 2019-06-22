#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,l,cnt=0;
    char a[105],b[]={"abcdefghijklmnopqrstuvwxyz"};
    scanf("%d",&n);
    scanf("%s",a);
    l=strlen(b);
    for(i=0;i<n;i++){
        if(a[i]>='A' && a[i]<='Z') a[i]+=32;
    }
    for(i=0;i<l;i++){
        for(j=0;j<n;j++){
            if(b[i]==a[j]){
                cnt++;
                break;
            }
        }
    }
    if(cnt==l) printf("YES\n");
    else printf("NO\n");
    }
