#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define FastRead        ios_base::sync_with_stdio(0);cin.tie(0);

bool comp(pair<int,int>&a,pair<int,int>&b)
{
    if(a.fi>b.fi) return true;
    else if(a.fi==b.fi){
        if(a.se<b.se) return true;
        else return false;
    }
    return false;
}
int main()
{
    FastRead
    int n,i,k,cnt=0,x,y;
    cin>>n>>k;
    pair<int,int>a[n];
    for(i=0;i<n;i++){
    cin>>a[i].fi>>a[i].se;
}
   sort(a,a+n,comp);
   x=a[k-1].fi;
   y=a[k-1].se;
    for(i=0;i<n;i++){
        if(a[i].fi==x && a[i].se==y) cnt++;
        }
   cout<<cnt<<endl;
}
