#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ff first
#define ss second
#define pi acos(-1)
#define speedforce ios_base::sync_with_stdio(0),cin.tie(0);
int main()
{
    speedforce
    int i,j,m,n,t,a,b,c,k,l,sum;
    cin>>t ;
       while(t--){
        int sum=0;
       cin>>a>>b>>c;
         k=min(b,c/2);
         sum+=3*k;
         b-=k;
         k=min(b/2,a);
         sum+=3*k;
       cout<<sum<<endl;
    }
}
