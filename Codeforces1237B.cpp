#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ff first
#define ss second
#define pi acos(-1)
bool en[100004];
int main()
{
    int i,j,m,n,t;
    cin>>n  ;
    int a[100007];
    int b[100007];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0;
    for(i=0;i<n;i++) cin>>b[i];
    for(i=0,j=0;i<n && j<n; )
    {
        if(en[a[i]]==0){
        if(a[i]!=b[j])
        {
            c++;
            en[b[j++]]=1;
        }
        else
        {
            i++,j++;
        }
    }
    else i++;
}
cout<<c<<endl;
}

