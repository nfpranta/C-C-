#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,cnt=0,sum=0;
    cin>>n;
    for(i=1;sum<n;i++){
        cnt+=i;
        sum+=cnt;
        if(sum>n) break;
    }
    cout<<i-1<<endl;
}
