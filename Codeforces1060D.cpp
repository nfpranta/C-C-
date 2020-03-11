#include<bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int n,i,j,t,l[100006]={0},r[100006]={0};
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>l[i]>>r[i];
    }
    sort(l,l+n);
    sort(r,r+n);
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=max(l[i],r[i]);
    }
    cout<<sum+n<<endl;
}
