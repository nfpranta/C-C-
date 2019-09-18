#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int n,i,j,m;
    cin>>n;
    vector<int>a;
    for(i=0;i<n;i++)
    {
        cin>>m;
        a.pb(m);
    }
    sort(a.begin(),a.end());
    int ans=0;
    for(i=0;i<n;i++)
    {
        if(i && a[i]==a[i-1]) continue;
        for(j=0;j<i;j++){
            if(a[i]%a[j]==0) break;
        }
        if(j==i) ans++;
    }
    cout<<ans<<endl;
}
