#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,n,k,l,m;
     string x;
     cin>>x;
    int sum=0;
     for(i=0;i<x.length();i++)
     {
        if(x[i]=='4')
        {
            sum=sum*2+1;
        }
        else {
            sum=sum*2+2;
        }
     }
     cout<<sum<<endl;
}
