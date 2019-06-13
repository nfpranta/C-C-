#include<stdio.h>
int main()
{
    int i,j,n,a[12]={4,7,47,74,447,474,744,747,774,477},l,cnt=0;
    scanf("%d",&n);
    for(i=0;i<10;i++){
        if(n%a[i]==0) {
                printf("YES\n");
        break;
        }
        else cnt++;
    }
    if(cnt==10) printf("NO\n");
}
