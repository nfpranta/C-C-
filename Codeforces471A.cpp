#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
typedef long long int ll;
#define ff first
#define ss second
int main()
{
    int i,j,m,n,t,k;
    int a[13];
    memset(a,0,sizeof(a));
    for(i=0;i<6;i++)
    {
        cin>>n;
        a[n]++;
    }
    int sum=0;
    int s=0;
    bool flag=0;
    for(i=0;i<=9;i++)
    {
        if(a[i]==6)
        {
            flag=1;
            break;
        }
        else if(a[i]>=4) sum++;
        else if(a[i]==2) s++;
    }
    if(sum && !s) cout<<"Bear"<<endl;
    else if(sum && s ||  flag) cout<<"Elephant"<<endl;
    else cout<<"Alien"<<endl;
}

