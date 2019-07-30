#include<bits/stdc++.h>
using namespace std;
long long int a[1000000],b[1000000],c[100000];
int main()
{
    long long int n,x,y,i,j,c1=0,c2=0,mi=10000000,z;
    cin>>n>>x>>y;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    memset(a,100000,sizeof(b));
     memset(a,100000,sizeof(c));
    if(n==x || n==y) {
            sort(a,a+n);
    cout<<a[0]<<endl;
    return 0;
    }
    for(i=0;i<n;i++){
        for(j=i-2;j>=i;j++){
            if(a[i]<a[i-j]) {
                b[i]++;
            }
        }
        for(j=i+1;j<=i+2;j++){
            if(a[i]<a[j]) c[i]++;
        }
        if(b[i]==x && c[i]==y){
            mi=min(mi,a[i]);
            z=i+1;
            break;
        }

    }
    cout<<z<<endl;
}
