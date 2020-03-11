#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ff first
#define ss second
#define pb push_back
typedef long long int ll;
int main()
{
    int i,j,n,sum=0,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int b[100010];
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(b,b+n);



      for(i=n-1;i>=0;i--)
      {
         if(b[i]>sum) sum++;
         else break;
      }
      cout<<sum<<endl;
    }
}
