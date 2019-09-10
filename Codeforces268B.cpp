#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m;
    cin>>n;
    m=n;
    for(i=1;i<n;i++){
        m+=i*(n-i);
    }
    cout<<m<<endl;
}
