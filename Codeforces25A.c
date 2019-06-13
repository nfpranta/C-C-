#include<stdio.h>
int main()
{
    int n,a[102],i,cnte=0,cnto=0,ie=0,io=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0) {
                cnte++;
                ie=i;
        }
        else {
                cnto++;
                io=i;
    }
}
if(cnte==1)printf("%d\n",ie+1);
else if(cnto==1) printf("%d\n",io+1);


}
