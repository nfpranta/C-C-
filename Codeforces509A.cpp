#include<bits/stdc++.h>
using namespace std;
int a[11][11];
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++) a[1][i]=1;
    for(i=2;i<=n;i++){
        for(j=1;j<=n;j++){
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    cout<<a[n][n]<<endl;
}
