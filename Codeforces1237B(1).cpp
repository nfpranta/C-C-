#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ff first
#define ss second
#define pi acos(-1)
bool en[100008];
int main()
{
    int i,j,m,n,t;
    cin>>n ;
    int a[100007];
    int b[100007];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0,d=0;
    for(i=0;i<n;i++) cin>>b[i];
    for(i=0;i<n;i++)
    {
        if(en[a[i]]) continue;
        for(j=d;a[i]!=b[j];j++)
        {
            en[b[j]]=1;
            d++;
            c++;
        }
        en[b[j]]=1;
        d++;
    }
    cout<<c<<endl;
}

