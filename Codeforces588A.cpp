#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m,j;
    cin>>n;
    int a[n],b[n];
    cin>>a[0]>>b[0];
    int mi=b[0];
    int s=0+mi*a[0];
    for(i=1;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(b[i]<mi)
        {
            mi=b[i];
            //cout<<mi<<endl;
        }
        s+=a[i]*mi;
    }
    cout<<s<<endl;
}
