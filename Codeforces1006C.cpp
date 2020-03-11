#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ma 1000000
ll a[ma];
int main()
{
    ll i,j,n,t;
    cin>>n;
    for(i=0;i<n;i++) cin>>a[i];
    ll sum=0,s1=0,s3=0;
    ll l=0,h=n-1;
    while(l<=h)
    {
        if(s1<s3)
        {
            s1+=a[l++];
        }
        else
        {
            s3+=a[h--];
        }
        if(s1==s3) sum=s1;
    }
    cout<<sum<<endl;
}
