//CUET_RENAISSANCE(18 BATCH)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[103][103],sum=0;
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        cin>>a[i][j];
    }
}
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
            if(i==j) sum+=a[i][j];
    else if(i==n-j-1) sum+=a[i][j];
    else if(i==n/2|| j==n/2) sum+=a[i][j];
    }
 }
 cout<<sum<<endl;
}


