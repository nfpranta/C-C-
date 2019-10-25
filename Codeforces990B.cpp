#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,k,i,j,cnt=0;
    cin>>n>>k;
     vector<int> a(n);
     int v[n+1];
    //memset(a,0,sizeof(a));
    for(i=0;i<n;i++)
    {
        cin>>v[i];
        a.push_back(v[i]);
    }
    sort(v,v+n);
    sort(a.begin(),a.end());
   // cout<<a.size()<<endl;
    a.resize(unique(a.begin(),a.end())-a.begin());
    //for(auto it:a) cout<<it<<" ";
    //cout<<endl;
    //cout<<a.size()<<endl;
    int ans=n;
   for(i=0;i<n;i++)
   {
      int l = v[i]+1,r=v[i]+k;
		int idx =lower_bound(a.begin(), a.end(), l) - a.begin();
    //    cout<<a[idx]<<" "<<idx<<endl;
		if (idx<a.size() && a[idx] <= r){
			ans--;
			//cout<<idx<<" "<<a[idx]<<endl;
   }
}
  cout<<ans<<endl;
}
