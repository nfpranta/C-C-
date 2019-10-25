#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    int a[n+1],b[m+1];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<m;i++) cin>>b[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
                break;
            }
        }
    }
    cout<<endl;
}
