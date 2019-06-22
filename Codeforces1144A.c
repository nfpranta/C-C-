#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,k,l,count=0;
     char a[102],temp;
        scanf("%d",&n);
        for(i=0;i<n;i++){
        scanf("%s",a);
    l=strlen(a);
    for(k=0;k<l-1;k++){
        for(j=k+1;j<l;j++)
            {
                if(a[k]>a[j]){
                        temp=a[k];
                a[k]=a[j];
                a[j]=temp;
            }
        }
    }
    for(j=0,count=0;j<l-1;j++){
        if(a[j+1]-a[j]==1) count++;
    }
      if(count==l-1) printf("Yes\n");
    else  printf("No\n");
}

}
