#include<bits/stdc++.h>
using namespace std;
#define  fi first
#define se second
#define pb push_back
#define mp make_pair
bool comp(const pair<int,int>&c, const pair<int,int>&d){
      if(c.fi==d.fi){
        return c.se<d.se;
      }
      else {
        return c.fi>d.fi;
      }
}
int main()
{
    vector<pair<int,int>>a;
    int n,j,i,k,x,y;
    cin>>n>>k;
    for(i=0;i<n;i++){
      cin>>x>>y;
      a.pb(mp(x,y));
    }
    sort(a.begin(),a.end(),comp);
     cout<<count(a.begin(),a.end(),a[k-1]);
}
