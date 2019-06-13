#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,t;
    scanf("%d %d",&a,&b);
    int x[b];
    for(i=0;i<b;i++){
        scanf("%d",&x[i]);
    }
    sort(x,x+b);
    t=x[a-1]-x[0];
    for(i=0;i<=b-a;i++){
        if(x[i+a-1]-x[i]<t) {
                t=x[i+a-1]-x[i];
    }
}
printf("%d\n",t);
return 0;
}
