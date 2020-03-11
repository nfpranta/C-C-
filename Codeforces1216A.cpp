#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    string x;
    cin>>x;
    int cnt=0;
    for(i=0;i<n-1;i+=2)
    {
       if(x[i]=='a' && x[i+1]!='b')
       {
           cnt++;
           x[i+1]='b';
       }
       else if(x[i]=='b' && x[i+1]!='a')
       {
           cnt++;
           x[i+1]='a';
       }
}
cout<<cnt<<endl;
cout<<x<<endl;
}
