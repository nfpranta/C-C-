#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,o=0,zero=0,zeromax=-1,x;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        if(x==1){
            o++;
            if(zero>0){
                zero--;
            }
        }
        else {
            zero++;
            if(zero>zeromax){
                zeromax=zero;
            }
        }
    }
    cout<<o+zeromax<<endl;
}
