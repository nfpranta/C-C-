#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cnt1=0,cnt2=0;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    for(i=0;i<n;i++){
        if(a[i]=='A') cnt1++;
        else if(a[i]=='D') cnt2++;
    }
    if(cnt1>cnt2) printf("Anton\n");
    else if(cnt1==cnt2) printf("Friendship\n");
    else printf("Danik\n");
}
