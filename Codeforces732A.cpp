#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i=1,x,y;
    scanf("%d%d",&n,&k);
    if(n%10==0 || n%10==k) {
            printf("%d\n",1);
            return 0;
}
int result=n;
while(result%10!=0 || result%10!=k ){
    result=n*i;
     if(result%10==0 || result%10==k) break;
    i++;
}

printf("%d\n",i);
}

