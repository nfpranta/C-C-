#include<bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int n,i,c=0,j=0;
    string x;
    cin>>x;
   int l=x.length();
    if(l==1)
   {
       cout<<0<<endl;
       return 0;
   }
    for(i=0;i<l;i++)
    {
        if((x[i]-'0')==1)
        {
            c++;
        }
    }
    if(l%2==0 || (l%2 && c==1)) cout<<l/2<<endl;
    else cout<<l/2+1;
}

