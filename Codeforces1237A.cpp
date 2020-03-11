#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
int main()
{
      int i,j,t,m,cnt,n,e=0,o=0,s=0;
      bool flag=1;
     cin>>n;
     int a[100000];
         for(i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i]/2;
    }
    if(s==0)
    {
        for(i=0;i<n;i++) cout<<a[i]/2<<endl;
    }
    else if(s>0)
    {
        for(i=0;i<n;i++){
        if(a[i]<0)
        {
            if(a[i]%2!=0){
                a[i]--;
                s--;
            }
        }
        if(s==0){
            for(i=0;i<n;i++)
            {
                cout<<a[i]/2<<endl;
            }
            break;
        }
    }
    }
      else
    {
        for(i=0;i<n;i++){
        if(a[i]>0)
        {
            if(a[i]%2!=0){
                a[i]++;
                s++;
            }
        }
        if(s==0){
            for(i=0;i<n;i++)
            {
                cout<<a[i]/2<<endl;
            }
            break;
        }
    }
    }
}


