#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i,j,k,l;
    string x;
    cin>>x;
    int len=x.length();
    int cnt=0;
    for(i=0;i<len;i++)
    {
        if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u') cnt++;
        else if((x[i]-'0')%2==1 && x[i]<'a') cnt++;
    }
    cout<<cnt<<endl;
}
