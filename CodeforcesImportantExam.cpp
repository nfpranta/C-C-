#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,sum=0;
    cin>>n>>m;
    int ma[m];
    int count[m][5]={0};
    string x;
    for(i=0;i<n;i++){
        cin>>x;
        for(j=0;j<m;j++){
            count[j][x[j]-'A']++;
        }
    }
    for(i=0;i<m;i++){
        cin>>ma[i];
    }
    int r=0;
    for(i=0;i<m;i++){
           int  mi=0;
        for(j=0;j<5;j++){
            if(count[i][j]>mi){
                mi=count[i][j];
}
        }
        sum+=(mi*ma[i]);
    }
    cout<<sum<<endl;
}
