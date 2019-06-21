#include<stdio.h>
int isprime(int i){
int x,flag=0;
if(i==2) return 1;
for(x=2;x<i;x++){
    if(i%x==0) {
  flag=1;
    break;
    }
}
    if(flag==1) return 0;
    else return 1;

}

int r(int y){
int x=y%10;
return x;
}

int main()
{
    int n,n1,n2,a,b,c=0,d,j,cnt=0;
    scanf("%d",&n);
    int i;
    int h;
    while(n--){
            c=0,cnt=0;
        scanf("%d%d",&n1,&n2);
        printf("Shiku gave %d numbers.\n",n2-n1+1);
        if(n1==1) a=n1+1;
        else a=n1;
        for(j=a;j<=n2;j++){
        h=isprime(j);
        if(h==1){
            cnt++;
            b=r(j);
            if(b%2!=0 && b>=2 && b<=10){
                c++;
                }
                }
        }
        printf("Halum could get %d fishes!!\n",cnt);
    printf("Finaly Halum got %d fishes!!\n",c);
}
}
