#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ff first
#define ss second
#define pi acos(-1)
int main()
{
    int i,j,m,n,t,cnt=1;
    bool flag=1;
    cin>>n ;
    int a[500][500];
    for(j=0;j<n;j++)
    {
        if(flag){
       for(i=0;i<n;i++)
       {
           a[i][j]=cnt++;
       }
        }
        else
        {
            for(i=n-1;i>=0;i--)
            {
                a[i][j]=cnt++;
            }
        }
        flag=!flag;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

