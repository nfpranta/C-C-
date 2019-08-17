#include<bits/stdc++.h>
using namespace std;
main()
{
    int m,n,i,j,c=0,w=0;
    char a[102][102];
    cin>>n>>m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]=='W' || a[i][j]=='G' || a[i][j]=='B'){
                w++;
            }
            else c++;
        }
    }
    if(w==m*n) cout<<"#Black&White"<<endl;
    else cout<<"#Color"<<endl;
}
