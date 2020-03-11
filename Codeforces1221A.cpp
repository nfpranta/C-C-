#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define ff first
#define ss second
int main()
{
    int n,i,j,q,sum=0;
    cin>>q;
    while(q--)
    {
        cin>>n;
        int temp;
        sum=0;
      map<int,int>x;
        for(i=0;i<n;i++)
        {
            cin>>temp;
          if(sum<=2048){
            sum+=temp;
          }
          if(temp<=2048)
          {
              x[temp]++;
          }
        }
        if(sum<2048)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(sum==2048 || x[2048]>=1 || x[1028]>=2 || x[512]>=4 || x[256]>=8)
        {
            cout<<"YES"<<endl;
            continue;
        }
        for(auto it: x)
        {
            if(it.ff<2048 && it.ss>1)
            {
                int k=(x[it.ff]/2);
                x[it.ff]-=k*2;
                x[it.ff*2]+=k;
            }
        }
        if(x[2048]>=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}
}
