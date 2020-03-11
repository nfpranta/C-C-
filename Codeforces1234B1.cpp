#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mx 1000010
#define pb push_back
#define pf push_front
int main()
{
    ll n,i,j,m,t,k;
    ll x;
    deque<ll>a;
    deque<ll>b;
    a.clear();
    b.clear();
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.pb(x);
    }
    for(i=0,j=0;i<n;i++)
    {
        bool flag=1;
        for(k=0;k<b.size();k++)
        {
            if(a[i]==b[k]) {
                flag=0;
                break;
            }
        }
        if(flag){
            if(j==m){
            b.pop_back();
                 j--;
        }
         b.pf(a[i]);
                j++;
}
    }
    int len=b.size();
    cout<<len<<endl;
    for(auto it=b.begin();it!=b.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

}

