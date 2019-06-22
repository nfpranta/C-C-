#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,l,cnt=0;
    char a[1005];
     gets(a);
    l=strlen(a);
    sort(a,a+l);
    for(i=0;i<l-1;i++){
       if(a[i]>='a' && a[i]<='z'){
        cnt++;
        if(a[i]==a[i+1]) {
                cnt-- ;
        }
       }
    }
    printf("%d\n",cnt);
}
