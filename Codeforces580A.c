#include<stdio.h>
int main()
{
    int n,i,a[100000],max=0,m=1;
    scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++){
    if(a[i]<=a[i+1]) {
        m++;
    }
        else{
                if (m>max) {
            max=m;
            }
            m=1;
  }
 }
    if(m>max) max=m;
    printf("%d\n",max);

}
