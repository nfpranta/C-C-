#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,i,j,cnt=0,k;
   scanf("%d%d",&a,&b);
   for(i=1;i<=a;i++){
    for(j=1,cnt=0;j<=b;j++){
          if(i%4==0){
                if(j==1) printf("#");
          else {
                cnt++;
                if(j<=b) printf(".");
                continue;
}
          }
      else  if(i%2==0 && j<b && i%4!=0) {
                printf(".");
                cnt++;
                continue;
    }
    else cnt++;
    if(cnt>0)  printf("#");
   }
   printf("\n");
}
}
