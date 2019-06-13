#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[220],b[106],c[105];
    int l1,l3;
    gets(a);
    gets(b);
    gets(c);
  strcat(a,b);
    l1=strlen(a);
    l3=strlen(c);
    sort(c,c+l3);
    sort(a,a+l1);
if(strcmp(a,c)==0) printf("YES\n");
    else printf("NO\n");
}
