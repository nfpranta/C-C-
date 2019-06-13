#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,l,j;
    char a[202]={0},b[202]={0};
    scanf("%s",a);
    l=strlen(a);
    for(i=0,j=0; ;){
        if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B') {
            b[j]=' ';
            i+=3;
            j++;
        }
        else {
            b[j]=a[i];
            i++;
            j++;
        }
        if(b[j-2]==' ' && b[j-1]==' '){
            j--;
        }
        if(i>l) break;
    }
    if(b[0]==' '){
        for(i=1;i<=strlen(b);i++){
            b[i-1]=b[i];
        }
    }
    printf("%s\n",b);
}


